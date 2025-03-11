#include <memory>
#include <iostream>






/*********************************************** */
/*Using shared ptr only*/
// class B;
// class A {
// public:
//     std::shared_ptr<B> b_ptr;
//     ~A() { std::cout << "A destroyed\n"; }
// };

// class B {
// public:
//     std::shared_ptr<A> a_ptr;
//     ~B() { std::cout << "B destroyed\n"; }
// };

// void createCycle() {
//     std::shared_ptr<A> a = std::make_shared<A>();
//     std::shared_ptr<B> b = std::make_shared<B>();

//     a->b_ptr = b;  // B's reference count increases to 2
//     b->a_ptr = a;  // A's reference count increases to 2
// }

// int main() {
//     createCycle();  // Memory leak! (No destruction)
//     return 0;
// }







/************************************************ */

/*Using weak_ptr with shared to overcome circular reference problem because weak doesn't increment ref count*/
/*
class B;
class A {
public:
    std::shared_ptr<B> b_ptr;
    ~A() { std::cout << "A destroyed\n"; }
};

class B {
public:
    std::weak_ptr<A> a_ptr;  // Change to weak_ptr (does not increase ref count)
    ~B() { std::cout << "B destroyed\n"; }
};

void createCycle() {
    std::shared_ptr<A> a = std::make_shared<A>();  // A created
    std::shared_ptr<B> b = std::make_shared<B>();  // B created

    a->b_ptr = b;  // A owns B (B's ref count = 2)
    b->a_ptr = a;  // Weak reference, does not increase A's count
}

int main() {
    createCycle();  // No memory leak
    return 0;
}
*/


/*Step-by-step Execution of createCycle()

    Create A object
        std::make_shared<A>() creates an A object in heap memory.
        The reference count of A is now 1 (a.use_count() == 1).
    Create B object
        std::make_shared<B>() creates a B object in heap memory.
        The reference count of B is now 1 (b.use_count() == 1).
    Link A to B (a->b_ptr = b;)
        A now holds a shared pointer to B.
        B's reference count increases to 2 (b.use_count() == 2).
    Link B to A (b->a_ptr = a;)
        B now holds a shared pointer to A.
        A's reference count increases to 2 (a.use_count() == 2).*/


        /*********Weak pointers doesn't own the object*******/