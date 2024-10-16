#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include "User.h"
#include "Book.h"
using namespace std;
class Librarian : public User {
public:
    Librarian(string id, string n, string e);
    void addBook(Book &book);
    void removeBook(Book &book);
    void displayUserInfo() override;
};

#endif
