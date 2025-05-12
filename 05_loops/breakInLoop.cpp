#include <iostream>
#include <string>
using namespace std;

int main() {

    string res;

    while (true)
    {
        cout << "Do you want more tea.(type 'STOP' to exit)" << endl;
        cin >> res;

        if(res == "STOP" || res == "stop"){
            break;
        }

        cout << "Here is your other cup of tea." << endl;
    }

    cout << "No more cup tea served you." << endl;

    return 0;
}