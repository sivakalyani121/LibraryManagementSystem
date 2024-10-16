#include "User.h"
User::User(std::string id, std::string n, std::string e) : userID(id), name(n), email(e) {}

std::string User::getName() const {
    return name;
}
