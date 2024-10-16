#ifndef USER_H
#define USER_H

#include <string>
using namespace std;
class User {
protected:
    string userID;
    string name;
    string email;

public:
    User(string id, string n, string e);
    
    string getName() const;  
    
    virtual void displayUserInfo() = 0;  
};

#endif
