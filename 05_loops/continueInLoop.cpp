#include <iostream>
#include <string>
using namespace std;

int main() {

    string teaType[4] = {"Ginger Tea", "Masala Tea", "Green Tea", "Leamon Tea"};

    for (int i = 0; i < 4; i++){
        
        if(teaType[i] == "Green Tea") {
            continue;
        }
        cout << "Brewing " << teaType[i] << endl; 
    }
    
    
    return 0;
}