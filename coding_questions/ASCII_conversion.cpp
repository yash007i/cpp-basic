#include <iostream>
#include <string>
using namespace std;

string ASCIIConversion(string str) {
    string result = "";
    string varOcg = "";

    for (int i = 0; i < str.size(); i++ ) {
        if (str[i] != ' ') {
            varOcg = to_string((int)str[i]);
            result += varOcg;
        } else {
            result += " "; 
        }
    }

    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string output = ASCIIConversion(input);
    cout << "Output: " << output << endl;

    return 0;
}
