#include <iostream>
#include "Library.h"
#include "Book.h"
#include "Student.h"
#include <ctime>
using namespace std;

void librarianMenu(Library &library) {
    int choice;
    do {
        cout << "\nLibrarian Menu:\n1. Add Book\n2. Display All Books\n3. Exit\nChoose an option: ";
        cin >> choice;

        if (choice == 1) {
            string title, author, ISBN;
            cout << "Enter book title: ";
            cin.ignore(); 
            getline(cin, title);
            cout << "Enter book author: ";
            getline(cin, author);
            cout << "Enter book ISBN: ";
            getline(cin, ISBN);

            Book newBook(title, author, ISBN);
            library.addBook(newBook);
            cout << "Book added successfully!\n";
        } else if (choice == 2) {
            library.displayAllBooks();
        }
    } while (choice != 3);
}

void studentMenu(Library &library) {
    int choice;
    do {
        cout << "\nStudent Menu:\n1. Display All Books\n2. Borrow Book\n3. Display Borrowed Books\n4. Exit\nChoose an option: ";
        cin >> choice;

        if (choice == 1) {
            library.displayAllBooks();
        } else if (choice == 2) {
            string name, rollNumber, bookTitle;
            cout << "Enter your name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter your roll number: ";
            getline(cin, rollNumber);
            cout << "Enter the title of the book to borrow: ";
            getline(cin, bookTitle);

            Book* selectedBook = nullptr;
            for (Book &book : library.getBooks()) {
                if (book.getTitle() == bookTitle && book.isAvailable()) {
                    selectedBook = &book;
                    break;
                }
            }

            if (selectedBook) {
                Student student(name, rollNumber);
                time_t now = time(0);
                string issueDate = ctime(&now);  
                library.issueBook(student, *selectedBook, issueDate);
                cout << "Book borrowed successfully!\n";
            } else {
                cout << "Book not available or not found.\n";
            }
        } else if (choice == 3) {
            string rollNumber;
            cout << "Enter your roll number: ";
            cin.ignore();  
            getline(cin, rollNumber);

            Student student("Temporary", rollNumber); 
            library.displayBorrowedBooksByStudent(student);
        }
    } while (choice != 4);
}

int main() {
    Library library;
    int role;
    while(1)
    {
    cout << "Welcome to Library Management System\n";
    cout << "Choose your role:\n1. Librarian\n2. Student/Faculty\nEnter your choice: ";
    cin >> role;

    if (role == 1) 
    {
        librarianMenu(library);
    } 
    else if (role == 2) 
    {
        studentMenu(library);
    } 
    else if(role==3) 
    {
        return 0;
    }
    else
    {
        cout<<"Invalid Choice"<<endl;           
    }
    }
}
