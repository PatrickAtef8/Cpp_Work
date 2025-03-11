/**
 *  The class Student is derived from the class User.
 * 
 */

#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "USER.hpp"
#include<iostream>

class Student : public User
{
    private :
    std::string StudentID;
    std::string StudentName;
public:
    Student(std::string studentName, std::string studentID);
    void DisplayStudentInfo() const ;
};




#endif // STUDENT_HPP