#include <iostream>
#include <cstdint>
#include <limits>

int main(int argc, char *argv[])
{
    std::cout << "type\t\t│ size  |\n"
              << "bool*\t\t│ "
              << sizeof(bool*) << "\t│\n"

              << "uint8_t*\t│ "
              << sizeof(uint8_t*) << "\t│\n"

              << "int8_t*\t\t│ "
              << sizeof(int8_t*) << "\t│\n"

              << "uint16_t*\t│ "
              << sizeof(uint16_t*) << "\t│\n"

              << "int16_t*\t│ "
              << sizeof(int16_t*) << "\t│\n"

              << "uint32_t*\t│ "
              << sizeof(uint32_t*) << "\t│\n"

              << "int32_t*\t│ "
              << sizeof(int32_t*) << "\t│\n"

              << "uint64_t*\t│ "
              << sizeof(uint64_t*) << "\t│\n"

              << "int64_t*\t│ "
              << sizeof(int64_t*) << "\t│\n"

              << "float*\t\t│ "
              << sizeof(float*) << "\t│\n"

              << "double*\t\t│ "
              << sizeof(double*) << "\t│\n";
}

