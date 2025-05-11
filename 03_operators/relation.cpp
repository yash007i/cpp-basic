#include <iostream>

using namespace std;

int main() {

    int cups;

    cout << "Enter the number of cups you have: " << endl;
    cin >> cups;

    if(cups >= 20){
        cout << "You will get a GOLD Badge" << endl;
    }else if(cups >= 10 && cups < 20){
        cout << "You will get a SILVER Badge" << endl;
    }else{
        cout << "Thank You For Visit" << endl;
    }

    return 0;
}