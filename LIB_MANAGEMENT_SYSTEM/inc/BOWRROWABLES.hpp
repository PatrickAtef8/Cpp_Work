    /**
     * FILE: Library items which can be borrowed by the users are defined here.
     */
    
    #ifndef BORROWABLES_HPP
    #define BORROWABLES_HPP

    #include <iostream>
    #include <string>

class Borrowables
{
    private:
        std::string ItemName;
        // std::string ItemID;
        // std::string ItemStatus;
        // std::string ItemAvailability;
        std::string borrowDate; 

    public:
     virtual void borrowBook() = 0;
     virtual void returnBook() = 0;
     virtual ~Borrowables() {};


};









 
    #endif // BORROWABLES_HPP