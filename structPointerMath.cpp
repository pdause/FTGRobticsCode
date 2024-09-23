#include <string>
#include <iostream>
#include <cstdint>

typedef struct {
    float weight;
    float height;
    float length;
    float width;
    float speed;
    float someOthermetric;
	std::string name;
	std::string drivetraintype;
} robot_t;

int main(void)
{
    robot_t myRobots[3] = {
        {
        .weight = 120.12,
        .height = 22.22,
        .length = 18,
        .width = 20,
        .name = "SomeRobotName",
        .drivetraintype = "swerve",
        },
        {
        .weight = 111.12,
        .height = 12.22,
        .length = 8,
        .width = 2,
        .name = "Robot2",
        .drivetraintype = "swervetester",
        },
        {
        .weight = 10.12,
        .height = 2.22,
        .length = 1,
        .width = 23,
        .name = "Robot3",
        .drivetraintype = "swerve3",
        }
    };

    //std::cout << "float size: " << sizeof(float) << std::endl;
    //std::cout << "string size: " << sizeof(std::string) << std::endl;
    //std::cout << "Packed struct size: " << (sizeof(float) * 6) + (sizeof(std::string) * 2) << std::endl;

    for(uint8_t x = 0; x < 3; x++)
    {
        std::cout << "Robot Struct Size: " << sizeof(myRobots[x]) << std::endl;
        std::cout << "Current Robot: " << myRobots[x].name << " Current Address:  " << &myRobots[x] << std::endl;
    }

}

