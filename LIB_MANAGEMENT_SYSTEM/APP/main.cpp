#include "../inc/LIBRARY.hpp"
#include "../inc/STUDENT.hpp"
#include "../inc/TEACHER.hpp"


int main()

{
    Library lib;
    lib.addBook (Book("C++ Book"));
    lib.addBook (Book("Linux"));

    lib.addUser (new Student("Patrick"));
    lib.addUser (new Teacher("Omar"));

    lib.DisplayBooks();

    return 0;

}