#include <iostream>
#include <cstdint>
#include <limits>

int main(int argc, char *argv[])
{
    std::cout << "type\t\t│ size\t│ min()\t\t\t│ max()\n"
              << "bool\t\t│ "
              << sizeof(bool) << "\t│ "
              << std::numeric_limits<bool>::min() << "\t\t\t│ "
              << std::numeric_limits<bool>::max() << '\n'

              << "uint8_t\t\t│ "
              << sizeof(uint8_t) << "\t│ "
              << +std::numeric_limits<uint8_t>::min() << "\t\t\t│ "
              << +std::numeric_limits<uint8_t>::max() << '\n'

              << "int8_t\t\t│ "
              << sizeof(int8_t) << "\t│ "
              << +std::numeric_limits<int8_t>::min() << "\t\t\t│ "
              << +std::numeric_limits<int8_t>::max() << '\n'

              << "uint16_t\t│ "
              << sizeof(uint16_t) << "\t│ "
              << std::numeric_limits<uint16_t>::min() << "\t\t\t│ "
              << std::numeric_limits<uint16_t>::max() << '\n'

              << "int16_t\t\t│ "
              << sizeof(int16_t) << "\t│ "
              << std::numeric_limits<int16_t>::min() << "\t\t│ "
              << std::numeric_limits<int16_t>::max() << '\n'

              << "uint32_t\t│ "
              << sizeof(uint32_t) << "\t│ "
              << std::numeric_limits<uint32_t>::min() << "\t\t\t│ "
              << std::numeric_limits<uint32_t>::max() << '\n'

              << "int32_t\t\t│ "
              << sizeof(int32_t) << "\t│ "
              << std::numeric_limits<int32_t>::min() << "\t\t│ "
              << std::numeric_limits<int32_t>::max() << '\n'

              << "uint64_t\t│ "
              << sizeof(uint64_t) << "\t│ "
              << std::numeric_limits<uint64_t>::min() << "\t\t\t│ "
              << std::numeric_limits<uint64_t>::max() << '\n'

              << "int64_t\t\t│ "
              << sizeof(int64_t) << "\t│ "
              << std::numeric_limits<int64_t>::min() << "\t│ "
              << std::numeric_limits<int64_t>::max() << '\n'

              << "float\t\t│ "
              << sizeof(float) << "\t│ "
              << std::numeric_limits<float>::min() << "\t\t│ "
              << std::numeric_limits<float>::max() << '\n'

              << "double\t\t│ "
              << sizeof(double) << "\t│ "
              << std::numeric_limits<double>::min() << "\t\t│ "
              << std::numeric_limits<double>::max() << '\n';
}

