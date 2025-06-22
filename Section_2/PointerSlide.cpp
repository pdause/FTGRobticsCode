#include <iostream>

int main(void)
{
    //Regular variable
    int x = 51423;

    //Address of variable x
    std::cout << "&x = " << &x << std::endl;

    //Int pointer that points to x
    int* y = &x;

    //This will not compile
    //*DEREFERENCE!
    //y = 3;
    //Note the address of x (&x) is the
    //same as the pointer (y) to x
    std::cout << "y = " << y << std::endl;

    //x is the same value as first initialized
    std::cout << "x = " << x << std::endl;
    //We are changing x here
    //more correct we are changing the value
    //pointed to by y, which is x
    *y = 3;
    //x has not changed 
    std::cout << "x = " << x << std::endl;
    //the dereferenced value of y (*y)
    std::cout << "*y = " << *y << std::endl;

    int z = 42;

    std::cout << "&z = " << &z << std::endl;

    y = &z;

    std::cout << "y = " << y << std::endl;

    std::cout << "*y = " << *y << std::endl;

    z = 34567;

    std::cout << "*y = " << *y << std::endl;
}