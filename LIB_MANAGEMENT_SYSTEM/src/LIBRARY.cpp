#include "../inc/LIBRARY.hpp"
#include <iostream>


void Library::addBook(const Book& book)
{
    books.push_back(book);

}

void Library::addUser(User* user)
{
    users.push_back(user);
}

void Library::DisplayBooks() const{
    std::cout <<"Library Books: \n";

    for(const auto book: books)
    {
        book.DisplayInfo();
    }
}

Library::~Library()
{
    for(auto user: users)
    {
        delete user;
    }
}