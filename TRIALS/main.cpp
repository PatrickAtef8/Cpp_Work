#include <iostream>
// void print()
// {
//     std::cout<<std::endl;
// }


// template <typename T, typename...Args>


// void print(T first, Args...rest)
// {
//     std::cout<<first<<" ";
//     print(rest...);
// }




class SmartPtr{

    T* ptr;

    public:

    SmartPtr(T* p=nullptr): ptr(p){

    }
    ~SmartPtr()
    {
        delete ptr;
    }

    T& operator*()
    {
        return *ptr;
    }
    T operator->()
    {
        return ptr;
    }
}


class Test
{
    public:
    void print() 
    {
        std::cout<<"Hello";
    }
}

int main()
{

//     int x=5;
//     int* ptr = &x;
//     std::cout<<" Address:"<<&x<<" - Value: "<<ptr<<std::endl;
//     delete ptr;
//     delete ptr2;
//     ptr=nullptr;
//     std::cout<<" Address:"<<ptr2<<"- Value: "<<*ptr<<std::endl;




    return 0;

} 