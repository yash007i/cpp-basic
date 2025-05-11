#include <iostream>

using namespace std;

int main() {

    int cups;
    bool isStudent;

    cout << "How many cups of teas have you purchased? " << endl;
    cin >> cups;

    cout << "Are you a student (1 -> Yes) (0 -> No): " << endl;
    cin >> isStudent;

    if(isStudent || cups >= 15){
        cout << "YUPPP!! You have elegible for discout !!" << endl;
    }else{
        cout << "OHHFOO!! You have not elegible for discout !!" << endl;
    }

    return 0;
}