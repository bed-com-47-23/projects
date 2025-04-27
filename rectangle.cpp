#pragma once
#include "rectangle.h"
rectangle::rectangle() {
    length = 0;
    width = 0;

}
 rectangle::rectangle(float newLength, float newWidth) {
    length = newLength;
    width = newWidth;
}
rectangle::~rectangle() {

}
float rectangle::GetArea() {
return length * width;
}
void rectangle::SetLength(float len){
    length= len;
}

void rectangle::SetWidth(float wid) {
    width = wid;
}
   


