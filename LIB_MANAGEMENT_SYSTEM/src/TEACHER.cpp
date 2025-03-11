#include "../inc/TEACHER.hpp"

Teacher::Teacher(std::string TeacherName, std::string TeacherID)
{
    TeacherName = TeacherName;
    TeacherID = TeacherID;
}

void Teacher::DisplayTeacherInfo() const 
{
    std::cout << "Teacher Name: " << UserName<< std::endl;
    std::cout << "Teacher ID: " << UserID << std::endl;
}