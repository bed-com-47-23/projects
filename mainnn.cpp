#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;
int main() {
    Rectangle rect;
    Triangle trgl;
    polygon* ppoly1 = &rect;
    polygon* ppoly2 = &trgl;
    ppoly1->SetValues(4, 5);
    ppoly2->SetValues(4, 5);
    cout << rect.area() <<'\n';
    cout << trgl.area() <<'\n';
    return 0;
}