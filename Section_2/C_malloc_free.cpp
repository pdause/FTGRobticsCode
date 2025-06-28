#include <stdint.h>
#include <stdlib.h>

int myFxn(int variable)
{
    int *myFxnVar = (int*)malloc(sizeof(int));
    //free(myFxnVar);
    //*myFxnVar = variable + 1;
    //return *myFxnVar;
    return variable;
}

int main(void)
{
    int myotherVar = 7;
    int mainVar = myFxn(3);
}