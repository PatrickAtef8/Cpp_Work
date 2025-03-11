/**
 *  The class TEACHER is derived from the class User.
 * 
 */

 #ifndef TEACHER_HPP
 #define TEACHER_HPP
 
 #include "USER.hpp"
 #include <iostream>

 class Teacher : public User
 {
     private :
     std::string TeacherID;
     std::string TeacherName;
 public:
      void Teacher(std::string TeacherName, std::string TeacherID);
      void DisplayTeacherInfo() const ;
 };
 
 
 
 
 #endif // TEACHER_HPP