#include "Librarian.h"
#include <iostream>
using namespace std;

Librarian::Librarian(string id, string n, string e) : User(id, n, e) {}

void Librarian::addBook(Book &book) {
    cout<<"Librarian "<<name<<" added book: "<<book.getTitle()<<endl;
}

void Librarian::removeBook(Book &book) {
    cout<<"Librarian "<<name<<" removed book: "<<book.getTitle()<<endl;
}
void Librarian::displayUserInfo() {
    cout<<"Librarian Name: "<<name<<", Email: "<<email<<endl;
}
