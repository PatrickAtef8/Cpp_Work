#include <iostream>
#include <memory>

class Resource {
public:
    Resource() { std::cout << "Resource acquired\n"; }
    ~Resource() { std::cout << "Resource destroyed\n"; }

    void print(){std::cout<<"Test Obj is alive!\n";}
};

int main() {
    /************************************************************* */
  /*unique pointer*/
   /* {
    std::unique_ptr<Resource> ptr1 = std::make_unique<Resource>(); // etkryt obj
    ptr2.reset(new Resource()); //etkryt object mn class resource w el adem etmasa7
    //ptr2->print();
    // std::unique_ptr<Resource> ptr2 = ptr1; //EROOR mynf3sh a3ml copy f unique pointer
    }
    // std::unique_ptr<Resource> ptr2 = std::move(ptr1);    

    // if(!ptr1)
    // {
    //     std::cout<<"hello\n";
    // }
    // }
    /*********************************************************** */


/****************************************************************** */
/*shared pointer*/
/*std::shared_ptr<Resource> ptr1 = std::make_shared<Resource>();

std::shared_ptr<Resource> ptr2 = ptr1; // el etnen byshawro 3ala nafs el 7aga

ptr2.reset(); // destroy object so ref count will be 1

std::cout<<"Ref count: "<<ptr1.use_count()<<std::endl;
/***************************************************************** */










    return 0;  
}
