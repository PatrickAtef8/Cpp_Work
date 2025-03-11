#include <iostream>


class RAII
 {
    private:
    int* resource;

    public:
    RAII(int value) : resource(new int(value)) 
    {

    }
    ~RAII() 
    {
         delete resource;

    }
    int get() const
     {
         return *resource; 
     }
};

    int main()
    {
        RAII obj(10);
        std::cout << "Value: " << obj.get() << '\n';
        return 0;
    }
