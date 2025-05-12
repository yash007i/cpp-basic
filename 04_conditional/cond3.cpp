#include <iostream>

using namespace std;

int main() {

    int cups;
    double pricePerCup = 20;
    double totalPrice , discount;

    cout << "Enter the number of cups: " << endl;
    cin >> cups;

    if(cups > 20){
        discount = 0.20;
    }else if(cups >= 10 && cups <= 20){
        discount = 0.10;
    }else{
        discount = 0.0;
    }

    totalPrice = pricePerCup * cups;
    totalPrice = totalPrice - (totalPrice * discount);

    cout << "You can get " << discount * 100 << "\% discount" << endl;
    cout << "Total Price after discount : " << totalPrice << endl;

    return 0;
}