#include <iostream>
using namespace std;
int main() {
    int daysUntilExpiration = rand()%12;
    if(daysUntilExpiration >= 6 && daysUntilExpiration <=10){
        cout << "your subscription will expire soon. Renew now!"<< endl;
    }
    
    else if (daysUntilExpiration >= 2){
        cout << "your subscription expires in " << daysUntilExpiration << "days" << endl; 
        cout << "Renew now and save 10%" << endl;
    }
    else if (daysUntilExpiration == 1) {
        cout << " your subscription will expire within a day!" << endl;
        cout << "Renew now and save 20%" << endl;
    }
    else if (daysUntilExpiration == 0){
        cout << " your subscription has expired" << endl;
    }
    else {
        cout << "you have an active subscription" << endl;
    }
    
    return 0;
}