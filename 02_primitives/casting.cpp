#include <iostream>

using namespace std;

int main() {

    float teaPrice = 99.99;
    int  roundedTeaPrice = (int) teaPrice; // 99

    int teaQuntity = 2;
    // int totalPrice = (float) teaPrice * teaQuntity; // return in int bcz store in int
    double totalPrice = teaPrice * teaQuntity;

    cout << "teaPrice : " << teaPrice << endl;    
    cout << "roundedTeaPrice : " << roundedTeaPrice << endl;    
    cout << "teaQuntity : " << teaQuntity << endl;    
    cout << "totalPrice : " << totalPrice << endl;    
        
    return 0;
}