#include <iostream>
#include <string>
using namespace std;

int main() {

    string teaType[4] = {"Ginger Tea", "Masala Tea", "Green Tea", "Leamon Tea"};

    for (int i = 0; i < 4; i++){
        cout << "Brewing " << teaType[i] << endl; 

        for (int i = 0; i <= 3; i++)
        {
            cout << "Brewing " << i << " cups of " << teaType[i] << endl;    
        }
    }
    
    
    return 0;
}