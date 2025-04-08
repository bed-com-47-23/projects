#include <iostream>
using namespace std;
int main() {
    int daysUntilExpiration = rand()%12;
    switch (daysUntilExpiration) {
        case 0:
        cout << "you subscription has expired" << endl;
        break;
        case 1:
        cout << "your subscription expires within a day!" << endl;
        cout << "Renew now and save 20%" << endl;
        break;
        case 2:
        cout << "your subscription expires in " << daysUntilExpiration << endl;
        cout << "Renew now and save 10%!" << endl;
        break;
        case 3:
        cout << "your subscription expires in " << daysUntilExpiration << endl;
        cout << "Renew now and save 10%!" << endl;
        break;
        case 4:
        cout << "your subscription expires in " << daysUntilExpiration << endl;
        cout << "Renew now and save 10%!" << endl;
        break;
        case 5:
        cout << "your subscription expires in " << daysUntilExpiration << endl;
        cout << "Renew now and save 10%!" << endl;
        break;
        case 6:
        cout << "your subscription will expire soon. Renew now!" << endl;
        break;
        case 7:
        cout << "your subscription will expire soon. Renew now!" << endl;
        break;
        case 8:
        cout << "your subscription will expire soon. Renew now!" << endl;
        break;
        case 9:
        cout << "your subscription will expire soon. Renew now!" << endl;
        break;
        case 10:
        cout << "your subscription will expire soon. Renew now!" << endl;
        break;
        default:
        cout << "you an active subscription." << endl;


    }
    return 0;
}