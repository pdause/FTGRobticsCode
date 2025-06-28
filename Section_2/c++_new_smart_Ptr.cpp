#include <stdint.h>
#include <memory>

struct myStruct
{
    int x;
    double y;
};

int myFxn(int variable)
{
    myStruct *myVar = new myStruct(); //NOOOOOO
    myVar->x = variable;

    std::unique_ptr<myStruct> mySmartPtr = std::make_unique<myStruct>();
    mySmartPtr->x = variable + 1;
    
    //delete myVar;
    return variable;
} //mySmartPtr falls out of scope and everthing is cleaned up

int main(void)
{
    int myotherVar = 7;
    int mainVar = myFxn(3);
}