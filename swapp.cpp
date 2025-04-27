#include <iostream>
using namespace std;
void swapnumbers(int* varA, int* varB) {
    int temp = *varA;
    *varA = *varB;
    *varB = temp;
}
int main(){

     int varA = 25;
     int varB = 100;
    cout << "varA before swap: " << varA << endl;
    cout << "varB before swap: " << varB << endl;
    // calling function swapnumbers
    swapnumbers(&varA, &varB);
    cout << "varA after swap: " << varA << endl;
    cout << "varB after swap: " << varB << endl;
    return 0;
}
