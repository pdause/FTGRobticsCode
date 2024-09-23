#include <iostream>
#include <cstdint>

int main(void)
{
    //Regular variable
    int x = 51423;
    uint8_t* bytePTR;
    bytePTR = (uint8_t*)(&x);
    for(uint8_t x = 0; x < sizeof(int); x++)
    {
        std::cout << "Address: " << static_cast<void*>(bytePTR) << " Value: " << std::uppercase << std::hex << "0x" << +*bytePTR << std::endl;
        bytePTR++;
    }
}