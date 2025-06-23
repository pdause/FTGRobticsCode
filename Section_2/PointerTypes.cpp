#include <stdint.h>
#include <iostream>

int main(void)
{
    unsigned int myArray[3] = {10,20,30};
    std::cout << "Using Index: " << myArray[0] << " " << myArray[1] << " " << myArray[2] << std::endl;
    std::cout << "Using Math: " << *(myArray + 0) << " " << *(myArray + 1) << " " << *(myArray + 2) << std::endl << std::endl;

    unsigned int *arrPtr;
    arrPtr = myArray;
    std::cout << "Using pointer: " << *(arrPtr+0) << " " << *(arrPtr+1) << " " << *(arrPtr+2) << std::endl;
    std::cout << "Doesn't Change: " << *(arrPtr+0) << " " << *(arrPtr+1) << " " << *(arrPtr+2) << std::endl << std::endl;

    std::cout << "Will Change: " << *(arrPtr++) << " " << *(arrPtr++) << " " << *(arrPtr) << std::endl;
    std::cout << "After Change: " << *arrPtr << std::endl;

    unsigned char *smArrPtr;
    smArrPtr = (unsigned char*)(myArray);

    std::cout << "char Pointer: " << static_cast<int>(*(smArrPtr+0)) << " " << static_cast<int>(*(smArrPtr+1)) <<\
                " " << static_cast<int>(*(smArrPtr+2)) << " " << static_cast<int>(*(smArrPtr+3)) << " " <<\
                static_cast<int>(*(smArrPtr+4)) << " " << static_cast<int>(*(smArrPtr+5)) << " " <<\
                static_cast<int>(*(smArrPtr+6)) << " " << static_cast<int>(*(smArrPtr+7)) << " " <<\
                static_cast<int>(*(smArrPtr+8)) << " " << static_cast<int>(*(smArrPtr+9)) << " " <<\
                static_cast<int>(*(smArrPtr+10)) << " " << static_cast<int>(*(smArrPtr+11)) << std::endl << std::endl;

    arrPtr = myArray;

    std::cout << "Addr uint*: " << arrPtr << std::endl;
    std::cout << "Addr char*: " << static_cast<void*>(smArrPtr) << std::endl;

    arrPtr++;
    smArrPtr++;
    std::cout << "Addr uint*: " << arrPtr << std::endl;
    std::cout << "Addr char*: " << static_cast<void*>(smArrPtr) << std::endl;

}