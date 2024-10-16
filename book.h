#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;
class Book {
private:
    string title;
    string author;
    string ISBN;
    bool available;  
public:
    Book(string title, string author, string ISBN);
    string getTitle() const;
    string getAuthor() const;
    string getISBN() const;
    bool isAvailable() const;
    void setAvailability(bool availability);  
};

#endif
