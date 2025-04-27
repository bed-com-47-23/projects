#include <iostream>
#include "person.h"
#include <string>
using namespace std;
int main() {
    person jane = person("jane", 60.0f);
    person john = person("john",75.0f);
    float totalweight = jane + john;
    cout << "totalweight: " << totalweight<< endl;
    return 0;
}