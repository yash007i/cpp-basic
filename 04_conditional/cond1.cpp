#include <iostream>
#include <string>
using namespace std;

int main() {

    string teaOrder;
    
    cout << "Enter your tea order: " << endl;
    getline(cin, teaOrder);

    if(teaOrder == "Green Tea"){
        cout << "Your order is conform." << endl;
        cout << "Order is Green Tea." << endl;
    }

    return 0;
}