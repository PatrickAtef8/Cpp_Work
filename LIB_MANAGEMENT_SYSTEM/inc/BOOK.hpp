/**
 *  File:  Book class will inherit from the borrowed class
 * 
 * 
 */

 #ifndef BOOK_HPP
 #define BOOK_HPP

#include "BOWRROWABLES.hpp"


class Book : public Borrowables
{
    private:
        std::string author;
        std::string BookName;
        std::string BookID;
        bool isAvailable();

    public:
      
       
        //getter
        void DisplayInfo() const;
        //check if book is available
       
        void borrowBook() ;
        void returnBook() ;
};










 #endif // BOOK_HPP