#include <iostream>
#include <string>

using namespace std;

int main() {

    string userTea;
    int teaQuntity;
    int price; 
    float realPrice;

    cout << "What would you like to order in tea? \n" ;
    getline(cin, userTea);

    cout << "How many cups of " << userTea << " would you like to have?" << endl;
    cin >> teaQuntity;

    cout << "What is the base price of " << userTea << " for one cup,Please guess." << endl;
    cin >> price;

    realPrice = price + ( (float) price * 10 ) / 100 ;

    cout << "Your tea order : " << userTea << endl; 
    cout << "Tea Quntity : " << teaQuntity << endl;
    cout << "Your guess Price is : " << price << endl;
    cout << "Actual Price for one cup is : " << realPrice << endl;
    cout << "Total Price is : " << realPrice * teaQuntity << endl;

    return 0;
}