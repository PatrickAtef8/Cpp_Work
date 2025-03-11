// #include <iostream>
// using namespace std;



// class Complex{
//   private:
//     double real;
//     double imag;

//     public:
//     double get_real();
//     double get_imag();
//     void set_real(double r);
//     void set_imag(double i);
//     Complex();
//     Complex(double r, double i);
//     Complex(const Complex &c);
//     ~Complex();
//   void add(Complex& c);
//     Complex sub(Complex c);
//     Complex mul(Complex c);
//     Complex div(Complex c);
//     void print();



// };

// Complex::Complex(){
//   real = 0;
//   imag = 0;
// }

// Complex::Complex(double r, double i){
//   real = r;
//   imag = i;
// }

// Complex::Complex(const Complex &c){
//   real = c.real;
//   imag = c.imag;
// }

// Complex::~Complex(){
//   cout << "Destructor called" << endl;
// }

// void Complex ::add(Complex& c){
//     real += c.real;
//     imag += c.imag;

// }


// Complex Complex::sub(Complex c){
//   Complex temp;
//   temp.real = real - c.real;
//   temp.imag = imag - c.imag;
//   return temp;
// }


// Complex Complex::mul(Complex c){
//   Complex temp;
//   temp.real = real * c.real - imag * c.imag;
//   temp.imag = real * c.imag + imag * c.real;
//   return temp;
// }


// Complex Complex::div(Complex c){
//   Complex temp;
//   temp.real = (real * c.real + imag * c.imag) / (c.real * c.real + c.imag * c.imag);
//   temp.imag = (imag * c.real - real * c.imag) / (c.real * c.real + c.imag * c.imag);
//   return temp;
// }

// double Complex::get_real(){
//   return real;
// }

// double Complex::get_imag() {
//   return imag;
// }

// void Complex::set_real(double r){
//   real = r;
// }

// void Complex::set_imag(double i){
//   imag = i;
// }
// void Complex::print(){
//     cout << real << " + " << imag << "i" << endl;

// }



// int main(){
//     sizeof(Complex);
//     printf("Size of Complex: %ld\n", sizeof(Complex));
// }



#include <iostream>
using namespace std;


class stack{
    private:
    int size;
    int *stk;
    int tos;
    static int count;

    public:
    stack()
    {
        size = 10;
        stk = new int[size];
        tos = -1;
        count++;
    }

    stack(int s)
    {
        size = s;
        stk = new int[size];
        tos = -1;
        count++;
    }

    void push(int x)
    {
        if(tos == size - 1)
        {
            cout << "Stack is full" << endl;
        }
        else
        {
            stk[++tos] = x;
        }
    }

    int pop()
    {
        if(tos>=0)
        {
            return stk[tos--];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }

    }

    void display()
    {
        //print under eachother from top to bottom
        for(int i = tos; i >= 0; i--)
        {
            cout << stk[i] << endl;
        }
      

    }

    static void showcount()
    {
        cout << "Count: " << count << endl;
    }

    ~stack()
    {
        delete []stk;
        count--;

    
    }

};


int stack::count = 0;

void friendFunction(const stack s)
{
    if(s.tos==-1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        for(int i = s.tos; i >= 0; i--)
        {
            cout << s.stk[i] << endl;
        }
    }
}

int main()
{
    stack s1(5);
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.display();
    stack::showcount();
    s1.pop();
    s1.display();
    stack::showcount();
    stack s2(10);
    s2.push(100);
    s2.push(200);
    s2.push(300);
    s2.push(400);
    s2.push(500);
    s2.push(600);
    s2.push(700);
    s2.push(800);
    s2.push(900);
    s2.push(1000);
    s2.display();
    stack::showcount();
    s2.pop();
    s2.display();
    stack::showcount();

    friendFunction(s1);
    friendFunction(s2);

    
    return 0;
}