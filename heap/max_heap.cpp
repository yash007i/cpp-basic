#include<iostream>
using namespace std;

class maxHeap {
    public: 
    int arr[100];
    int size;

    maxHeap () {
        arr[0] = -1;
        size = 0;
    }
    void insert(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index / 2;
            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }else {
                return;
            }
        }
    }

    void deleteHeap(){
        if(size == 0){
            cout << "Empty Heap." << endl;
            return;
        }
        // step 1 : put last element into first index
        arr[1] = arr[size];
        //step 2 : remove last element 
        size--;

        //step 3 : take root node to its correct position
        int i = 1;
        while(i < size) {
            int left = 2 * i;
            int right = 2 * i + 1;

            if(left < size && arr[i] < arr[left]){
                swap(arr[i] , arr[left]);
                i = left;
            }else if(right < size && arr[i] < arr[right]){
                swap(arr[i] , arr[right]);
                i = right;
            }else return;
        }
    }
    
    void print() {
        for(int i = 1 ; i <= size ; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    maxHeap h1;
    h1.insert(60);
    h1.insert(50);
    h1.insert(40);
    h1.insert(30);
    h1.insert(53);
    h1.insert(73);
    h1.deleteHeap();
    h1.print();
    return 0;
}