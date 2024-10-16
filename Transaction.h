#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
#include "Student.h"
#include "Book.h"

class Transaction {
private:
    std::string transactionId;  
    Student* student;
    Book* book;
    std::string issueDate;

public:
    Transaction(std::string tID, Student* stu, Book* bk, std::string iDate);
    Student* getStudent() const;
    Book* getBook() const;
    std::string getIssueDate() const;
};

#endif
