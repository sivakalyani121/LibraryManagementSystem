#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string name;
    std::string rollNumber;

public:
    Student(std::string name, std::string rollNumber);
    std::string getName() const;
    std::string getStudentId() const;
};

#endif
