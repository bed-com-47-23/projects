#include <iostream>
using namespace std;
int main() {
    int* ppointer = nullptr;
    int numbersarray[3] = {10, 20, 30};
    ppointer = numbersarray;
    cout << "address of ppointer: " << ppointer << endl;
    cout << "address of numbersarray[0]: " << numbersarray << endl;
    cout << "value at pointer: " << *ppointer << endl;
    cout << "value at ++ppointer: " << *(++ppointer) << endl;
    ppointer = numbersarray;
    cout << "value at ppointer++: " << *(ppointer) << endl;
    return 0;
}