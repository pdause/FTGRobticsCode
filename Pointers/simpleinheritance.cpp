#include <iostream>
#include <string>
#include <vector>
#include <memory>

struct bird
{
    virtual ~bird() = default;

    virtual void talk()
    {
        std::cout << "I am generic bird talking" << std::endl;
    }
};

struct crow : public bird
{
    void talk() override
    {
        std::cout << "I am crow talking" << std::endl;
    }
};

struct chicken : public bird
{
    void talk() override
    {
        std::cout << "I am chicken talking" << std::endl;
    }
};

void somecallforbird(bird& justbird)
{
    justbird.talk();
}

int main() {
    bird somebird{};
    crow somecrow{};
    chicken somechicken{};

    somecallforbird(somechicken);
    somecallforbird(somebird);
    somecallforbird(somecrow);
}