#include <iostream>

using namespace std;

int main() {

    int teaLeaves = 50;
    float waterTemperature = 95.51;
    double priceOfTea = 199.5123;
    char teaGrade = 'A'; // 'ABC' -> give warning return 'C'
    bool isTeaReady = true; // '' -> return error : empty character constant

    cout << "teaLeaves : " << teaLeaves << endl;
    cout << "waterTemperature : " << waterTemperature << endl;
    cout << "priceOfTea : " << priceOfTea << endl;
    cout << "teaGrade : " << teaGrade << endl;
    cout << "isTeaReady : " << isTeaReady << endl;

    return 0;
}