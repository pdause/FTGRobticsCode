#include <iostream>
#include <format>
#include <cstdint>

int main(void)
{
    //Regular variable
    uint32_t example[5] = {51423, 222, 333, 444, 555};
    uint32_t* examplePtr = &example[0];
    uint8_t* exampleBytePtr = (uint8_t*)(&example[0]);
    
    for(uint8_t x = 0; x < 5; x++)
    {
        std::cout << "Address (examplePtr + x): " << (examplePtr + x) << std::endl;
        std::cout << "Address &example[x]:      " << &example[x] << std::endl;

        std::cout << "Value *(examplePtr + x):  " << *(examplePtr + x) << std::endl;
        std::cout << "Value example[x].         " << example[x] << std::endl;
        
        std::cout << "Hex Value example[x]:     " << std::format("{:#06x}\n", example[x]);

        std::cout << "Address byte0: " << static_cast<void*>(exampleBytePtr + x) << " Value: " << std::format("{:#04x}\n", *(exampleBytePtr + x));
        std::cout << "Address byte1: " << static_cast<void*>(exampleBytePtr + x + 1) << " Value: " << std::format("{:#04x}\n", *(exampleBytePtr + x + 1));
        std::cout << "Address byte1: " << static_cast<void*>(exampleBytePtr + x + 2) << " Value: " << std::format("{:#04x}\n", *(exampleBytePtr + x + 2));
        std::cout << "Address byte1: " << static_cast<void*>(exampleBytePtr + x + 3) << " Value: " << std::format("{:#04x}\n", *(exampleBytePtr + x + 3)) << std::endl;
        exampleBytePtr+=3;
    }
}