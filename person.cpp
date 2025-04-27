#pragma once
#include "person.h"
#include <string>
using namespace std;
person::person() {
    mWeight = 0;
    mFirstName = "default";
    mAge = 0;

}
person::person(string newFirstName, float newWeight) {
    mFirstName = newFirstName;
    mWeight = newWeight;
}
person::~person() {

}
float person::operator+(const person& otherperson) {
false_type
person;mWeight = this->mWeight + otherperson.mWeight;
}


























