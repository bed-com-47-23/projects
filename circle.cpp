#pragma once
#include "circle.h"
using namespace shapes;
circle:: circle() {
    radius = 0.0;
}
circle::circle(double newRadius) {
    radius = newRadius;
}
circle::~circle() {

}
double circle::GetArea() {
    return 3.14 * radius * radius; 
}
void circle::SetRadius(double rad) {
    radius = rad;
}