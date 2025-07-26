#include <iostream>
#include <string>
#include <cctype>
using namespace std;


string strReverse (string str) {
    int s = 0;
    int e = str.size() - 1;
    int count = 0;
    cout << "Inside Function " << str[s] << endl;

    if(str[s] == '-'){
        while (s < e)
    {   
        if(str[e] == '0' && count == 0 ){
            str[e] = ' ';
            e--;
        }
        else{
            count++;
            swap(str[s+1], str[e]);
            s++;
            e--;
        }
    }
    return str;
    }
    if(!isdigit(str[s])){
        return "0";
    }
    while (s < e)
    {   
        if(str[e] == '0' && count == 0 ){
            str[e] = ' ';
            e--;
        }
        else{
            count++;
            swap(str[s], str[e]);
            s++;
            e--;
        }
    }
    return str;
}

int main () {
    string str ;
    cout << "Enter Your String" << endl;
    cin >> str;

    cout << strReverse(str) << endl;

    return 0;
}