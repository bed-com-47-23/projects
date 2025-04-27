#pragma once
#include "triangle.h"
using namespace shapes;
triangle::triangle() {
    height = 0.0;
    base = 0.0;
}
triangle::triangle(double newHeight, double newBase) {
    height = newHeight;
    base = newBase;
}
triangle::~triangle() {

}

double triangle::GetArea() {
    return 0.5 * height * base;
}    

void triangle::SetHeight(double hei) {
    height = hei;
}
void triangle::SetBase(double bas) {
    base = bas;
}