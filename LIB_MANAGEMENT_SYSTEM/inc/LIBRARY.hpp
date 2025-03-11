#include "BOOK.hpp"
#include "USER.hpp"
#include <vector>


class Library
{
    private:
        std::vector<Book> books; // Composition lazem el object mn book class yetms7 mn el memory lama el library object ytms7
        std::vector<User*> users; // Aggregation w hen lazm a3mlha pointer 3shan lw 7ad 3ayz yms7 el user object mn el memory yms7 bs el pointer myms7sh el library object
    public:

        void addBook(const Book& book);
        void addUser(User* user);
        void DisplayBooks() const;
}