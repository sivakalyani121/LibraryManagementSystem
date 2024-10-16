#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"
#include "Student.h"
#include "Transaction.h"

class Library {
private:
    std::vector<Book> books;
    std::vector<Transaction> transactions;

public:
    void addBook(Book &book);
    void displayAllBooks();
    void issueBook(Student &student, Book &book, std::string issueDate);
    void displayBorrowedBooksByStudent(Student &student);
    std::vector<Book>& getBooks();  
};

#endif
