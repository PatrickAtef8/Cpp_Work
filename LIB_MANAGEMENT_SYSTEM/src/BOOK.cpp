#include "../inc/BOOK.hpp"
#include <iostream>


void Book::Book(std::string author, std::string BookName, std::string BookID, bool isAvailable) 
{
    this->author = author;
    this->BookName = BookName;
    this->BookID = BookID;
    this->isAvailable = isAvailable;
}
 
void Book::DisplayInfo() const
{
    std::cout << "Book Name: " << BookName << std::endl;
    std::cout << "Book ID: " << BookID << std::endl;
    std::cout << "Author: " << author << std::endl;
    std::cout << "Is Available: " << isAvailable << std::endl;

}
bool Book::isAvailable() 
{
    return isAvailable;

}

void Book:: borrowBook()
{
    isAvailable = false;
}

void Book:: returnBook()
{
    isAvailable = true;
}