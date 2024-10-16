#include "Student.h"

Student::Student(std::string name, std::string rollNumber)
    : name(name), rollNumber(rollNumber) {}

std::string Student::getName() const { return name; }
std::string Student::getStudentId() const { return rollNumber; }
