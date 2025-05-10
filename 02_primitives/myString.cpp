#include <iostream>
#include <string>

using namespace std;

int main() {

    string favoriteTea = "Ginger Tea";
    string description = "Known as \"World best tea\".";

    cout << "favoriteTea : " << favoriteTea << endl;       
    cout << "description : " << description << endl; 

    string userTea;
    int teaQuntity;

    cout << "What would you like to order in tea? \n" ;
    getline(cin, userTea);

    cout << "How many cups of " << userTea << " would you like to have?" << endl;
    cin >> teaQuntity;

    cout << "Your tea order : " << userTea << endl; 
    cout << "Tea Quntity : " << teaQuntity << endl; 

    return 0;
}