#include <iostream>

using namespace std;

int main() {

    int teaBags;
    
    cout << "Enter the number of tes bags you have: " << endl;
    cin >> teaBags;

    if(teaBags < 10){
        teaBags += 5;
    }
    
    cout << "Your total bags are " << teaBags << endl;

    return 0;
}