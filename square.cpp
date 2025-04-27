#pragma once
#include "square.h"
using namespace shapes;
square::square() {
    length = 0.0;
}
square::square(double newlength) {
    length = newlength;
}
square::~square() {

}
double square::GetArea() {
    return length * length;
}
 void square::SetLength(double len){
    length = len;
}


