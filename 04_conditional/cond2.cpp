#include <iostream>

using namespace std;

int main() {

    int hr;
    
    cout << "Enter the current hour (0 - 23): " << endl;
    cin >> hr;
    
    if(hr >= 8 && hr < 18){
        cout << "Tea shop is OPEN." << endl;        
    }else{
        cout << "Tea shop is CLOSE." << endl;
    }

    return 0;
}