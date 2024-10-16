#include "Library.h"
#include <iostream>
#include<string>
using namespace std;
void Library::addBook(Book &book) {
    books.push_back(book);
}

void Library::displayAllBooks() {
    cout<<"\nAvailable Books:\n";
    for (Book &book : books) {
        if (book.isAvailable()) {
            cout<<"Title: "<<book.getTitle()<<", Author: "<<book.getAuthor() 
                      <<", ISBN: "<<book.getISBN()<<endl;
        }
    }
}

void Library::issueBook(Student &student, Book &book, string issueDate) {
    book.setAvailability(false);  
    string transactionId = "TXN" + to_string(transactions.size() + 1);  
    Transaction newTransaction(transactionId, &student, &book, issueDate);
    transactions.push_back(newTransaction);
}

void Library::displayBorrowedBooksByStudent(Student &student) {
    cout<<"\nBooks borrowed by "<<student.getName()<<" ("<<student.getStudentId()<<"):\n";
    bool found = false;
    for (Transaction &transaction : transactions) {
        if (transaction.getStudent()->getStudentId() == student.getStudentId()) {
            cout<<"Title: "<<transaction.getBook()->getTitle() 
                      <<", Borrowed on: "<<transaction.getIssueDate()<<endl;
            found = true;
        }
    }
    if (!found) {
        cout<<"No books borrowed by this student."<<endl;
    }
}
vector<Book>& Library::getBooks() {
    return books; 
}
