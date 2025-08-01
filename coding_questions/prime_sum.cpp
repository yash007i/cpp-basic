#include<iostream>
#include<vector>
using namespace std;

class prime_sum {
    private: 
        bool isPrime(int num){
            if(num == 2) return false;
            if(num == 1 || num <= 0) return false;
            if(num % 2 == 0) return false;

            for(int i = 3 ; i < num / 2; i++){
                if(num % i == 0) return false;
            }

            return true;
        }

    public:
        bool sumPrime(vector<int> arr){
            int result = 0;

            for(int i = 0; i < arr.size(); i++){
                result += arr[i];
            }
            cout << "Result " << result << endl;
            if(result <= 1){
                return false;
            }
            while (result > 2)
            {
                cout << "is Prime " << isPrime(result) << endl;
                if(isPrime(result)){
                    result -= arr.size();
                }else {
                    return true;
                }
            }
            if(result == 0) return false;
            return true;
        }

};

int main(){
     vector<int> nums = {-2,-5,2,5,1};
     prime_sum pc;
    //  pc.sumPrime(nums);
     cout << pc.sumPrime(nums) << endl;
     
     return 0;
}