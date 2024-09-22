#include <string>
#include <iostream>

typedef struct {
    float weight;
    float height;
    float length;
    float width;
	std::string name;
	std::string drivetraintype;
} robot_t;

void WrongChangeRobotWeight(robot_t theRobot);
void CorrectChangeRobotWeight(robot_t& theRobot);

int main(void)
{
    robot_t myRobot = {
        .weight = 120.12,
        .height = 22.22,
        .length = 18,
        .width = 20,
        .name = "SomeRobotName",
        .drivetraintype = "swerve",
    };
    
    std::cout << "Robot Weight before function: " << myRobot.weight << std::endl;
    WrongChangeRobotWeight(myRobot);
    std::cout << "Robot Weight after function: " << myRobot.weight << std::endl << std::endl;

    std::cout << "Robot Weight before function: " << myRobot.weight << std::endl;
    std::cout << "Robot length before function: " << myRobot.length << std::endl;
    CorrectChangeRobotWeight(myRobot); //NOTE NO Address needed
    std::cout << "Robot Weight after function: " << myRobot.weight << std::endl;
    std::cout << "Robot length after function: " << myRobot.length << std::endl << std::endl;

}

//Pass by copy
//This is fine if you only need the info and do not need to change it
//Changes are are local to the function only!
void WrongChangeRobotWeight(robot_t theRobot)
{
    std::cout << "Robot Name in call: " << theRobot.name << std::endl;
    std::cout << "Robot Weight in call before change: " << theRobot.weight << std::endl;
    theRobot.weight = 110.25;
    std::cout << "Robot Weight in call after change: " << theRobot.weight << std::endl;
}

//Pass by reference
//In modern C++ pass by reference & is NOT a pointer it is the thing you are passing
//NOTE: no derefernce for setting the struct values
void CorrectChangeRobotWeight(robot_t& theRobot)
{
    theRobot.weight = 107.65;
    theRobot.length = 17;
}
