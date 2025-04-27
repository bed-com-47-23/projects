#pragma once
#include <string>
using namespace std;
class person {
    public:
    person();
    person(string newFiestName,float newWeight);
    ~person();
    //overload the add operator
    float operator + (const person& otherperson);
    private:
    float mWeight;
    string mFirstName;
    int mAge;
};