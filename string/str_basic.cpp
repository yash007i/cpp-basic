#include<iostream>
using namespace std;

string removeOccurance(string s, string part){
    while(s.size() > 0 && s.find(part) < s.length()){
        int count = s.find(part);
        s.erase(count, part.length());        
    }
    return s;
}

int main(){
     string str = "yalaloshlaloyashlashyashlalo";
     string part = "xy";

     cout << removeOccurance(str, part);
     return 0;
}