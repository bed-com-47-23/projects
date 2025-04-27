
#include <iostream>
# include "square.h"
#include "triangle.h"
#include "circle.h"
using namespace std;
using namespace shapes;
void calculateareasquare(){
    square square;
    double a;
    double area = 0.0;
    cout << "enter the length of square: ";
    cin >> a;
    square.SetLength(a);
    area = square.GetArea();
    cout << "the area of square is: " << area << endl;
}
void calculateareatriangle() {
triangle triangle;
double b;
double c;
double area = 0.0;
cout << "enter the height of triangle: ";
cin >> b;
triangle.SetHeight(b);
cout << "enter base of triangle: ";
cin >> c;
triangle.SetBase(c);
area = triangle.GetArea();
cout << "the area of triangle is: " << area << endl;
}
void calculateareacircle() {
    circle circle;
    double d;
    double area = 0.0;
    cout << "enter radius of circle:";
    cin >> d;
    circle.SetRadius(d);
    area = circle.GetArea();
    cout << "area of circle is : " << area << endl;

}
int main() {
    int choice;
    do{
        cout << "area of shape" << endl;
        cout << "1. square" << endl;
        cout << "2. triangle" << endl;
        cout << "3. circle" << endl;
        cout << "4 .quit" << endl;
        cout << "enter your choice: ";
        cin >> choice;
        switch(choice) {
        case 1:
        calculateareasquare();
        break;
        case 2:
        calculateareatriangle();
        break;
        case 3:
        calculateareacircle();
        break;
        case 4:
        cout << "quiting..." << endl;
        break;
        default:
        cout << "please enter number between 1 and 3" << endl;

        }
    } while(choice != 4);
    return 0;
}