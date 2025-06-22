#include <string>
#include <iostream>

struct robot {
    float weight;
    float height;
    float length;
    float width;
	std::string name;
	std::string drivetraintype;
};

void WrongChangeRobotWeight(struct robot theRobot);
void CorrectChangeRobotWeight(struct robot* theRobot);

int main(void)
{
    struct robot myRobot = {
        .weight = 120.12,
        .height = 22.22,
        .length = 18,
        .width = 20,
        .name = "SomeRobotName",
        .drivetraintype = "swerve",
    };

    struct robot* myRobotPTR = &myRobot;
    
    std::cout << "Robot Weight before function: " << myRobot.weight << std::endl;
    WrongChangeRobotWeight(myRobot);
    std::cout << "Robot Weight after function: " << myRobot.weight << std::endl << std::endl;

    std::cout << "Robot Weight before function: " << myRobot.weight << std::endl;
    std::cout << "Robot length before function: " << myRobot.length << std::endl;
    //CorrectChangeRobotWeight(myRobot); //NOPE
    //CorrectChangeRobotWeight(myRobotPTR); //OK
    CorrectChangeRobotWeight(&myRobot); //Can also take address of OG
    std::cout << "Robot Weight after function: " << myRobot.weight << std::endl;
    std::cout << "Robot length after function: " << myRobot.length << std::endl << std::endl;

}

//Pass by copy
//This is fine if you only need the info and do not need to change it
//Changes are are local to the function only!
void WrongChangeRobotWeight(struct robot theRobot)
{
    std::cout << "Robot Name in call: " << theRobot.name << std::endl;
    std::cout << "Robot Weight in call before change: " << theRobot.weight << std::endl;
    theRobot.weight = 110.25;
    std::cout << "Robot Weight in call after change: " << theRobot.weight << std::endl;
}

//Pass by reference
//This is directly accessing the memory of the struct pointer (address) passed in
//You will change the original thing by changing values here
void CorrectChangeRobotWeight(struct robot* theRobot)
{
    theRobot->weight = 107.65;

    (*theRobot).length = 17;
}
