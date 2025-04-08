#include <iostream>
using namespace std;
void square() {
    double a;
    cout << "enter length:";
    cin >> a;
    cout << "  Area of square is " << a * a << endl;
}
void rectangle() {
    double a, b;
    cout << "Enter the length:";
    cin >> a;
    cout << "Enter the width:";
    cin >> b;
    cout << " Area of rectangle is: " << a * b << endl;
}
void triangle() {
    double a, b;
    cout << "Enter the base:";
    cin >> a;
    cout << "Enter the height:";
    cin >> b;
    cout << "Area of triangle is: " << 0.5 * a * b << endl;
}
int main() {
    int choice;
    do{
        cout << "1. Square" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Triangle" << endl;
        cout << "4. Quit program" << endl;
        cout << "Enter your choice:";
        cin >> choice;
        switch (choice) {
            case 1:
            square();
            break;
            case 2:
            rectangle();
            break;
            case3:
            triangle();
            break;
            case 4:
            cout << "Quitting..." << endl;
            break;
            default:
            cout << "invalid choice. please enter number between 1 and 4." << endl;
        }
    }while (choice != 4);
    return 0;
}