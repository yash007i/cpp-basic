#include <iostream>

using namespace std;

int main() {

    int cups;

    cout << "Enter the number of cups to server: " << endl;
    cin >> cups;

    while (cups > 0)
    {
        cout << "Serving cup of tea \n" << cups << " remaining" << endl;
        cups--;
    }

    cout << "ALL TEA CUPS ARE SERVED" << endl;
    

    return 0;
}