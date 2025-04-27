
#include <iostream>
#include "Box.h"
using namespace std;
// main function for program
int main() {
    Box box1; //declare box1 of type box
    Box box2; //declare box2 of type box
    Box box3; //declare box3 of type box
    double volume= 0.0; //store the volume of box here
    // box1 specification
    box1.SetLength(6.0);
    box1.SetBreadth(7.0);
    box1.SetHeight(5.0);
    //box2 specification
    box2.SetLength(12.0);
    box2.SetBreadth(13.0);
    box2.SetHeight(10.0);
    //volume of box1
    volume = box1.GetVolume();
    cout <<"volume of box1: " << volume << endl;
    // volume of box2
    volume = box2.GetVolume();
    cout << "volume of box2: " << volume << endl;
    // add two objects as follows
    box3 = box1 + box2;
    // volume of box3
    volume = box3.GetVolume();
    cout << "volume of box3: " << volume << endl;
    return 0;


}