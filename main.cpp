#include <iostream>
#include "rectangle.h"
using namespace std;
int main() {
rectangle rectangle; 
float a;
float b;
float area = 0.0;
cout << "enter length: ";
cin >> a;
rectangle.SetLength(a);

cout << "enter width: ";
cin >> b;
rectangle.SetWidth(b);
 area = rectangle.GetArea();
cout << "Area is: " << area << endl;
return 0;
}



