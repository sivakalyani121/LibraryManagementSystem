#include "Transaction.h"

Transaction::Transaction(std::string tID, Student* stu, Book* bk, std::string iDate)
    : transactionId(tID), student(stu), book(bk), issueDate(iDate) {}

Student* Transaction::getStudent() const { return student; }
Book* Transaction::getBook() const { return book; }
std::string Transaction::getIssueDate() const { return issueDate; }
