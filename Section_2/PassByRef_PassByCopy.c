#include <stdio.h>

struct robot {
	float weight;
    float height;
    float length;
    float width;
	char name[40];
	char drivetraintype[50];
};

void createRobot(struct robot* rbt, float weight, float height, float length, float width)
{
    rbt->weight = weight;
    rbt->height = height;
    rbt->length = length;
    rbt->width = width;
}

void ChangeRobotNoPointer(struct robot rbt, float weight)
{
    rbt.weight = weight;

    printf("ChangeRobotNoPointer weight: %f\n", rbt.weight);
}

void ChangeRobotWithPointer(struct robot* rbtPtr, float weight)
{
    rbtPtr->weight = weight;

    printf("ChangeRobotWithPointer weight: %f\n", rbtPtr->weight);
}

void main(void)
{
    struct robot myRobot;

    printf("Before create weight: %f\n", myRobot.weight);

    createRobot(&myRobot, 100, 23, 28, 33);

    printf("After create weight: %f\n", myRobot.weight);

    ChangeRobotNoPointer(myRobot, 105);

    printf("Pass by value weight: %f\n", myRobot.weight);

    ChangeRobotWithPointer(&myRobot, 122);

    printf("Pass by reference weight: %f\n", myRobot.weight);
}

