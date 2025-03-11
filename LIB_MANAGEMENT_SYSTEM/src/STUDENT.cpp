#include "../inc/STUDENT.hpp"



Student::Student(std::string studentName, std::string studentID)
{
    StudentName = studentName;
    StudentID = studentID;
}

void Student::DisplayStudentInfo() const override
{
    std::cout << "Student Name: " << UserName<< std::endl;
    std::cout << "Student ID: " << UserID << std::endl;
}