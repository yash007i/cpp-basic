#include<iostream>
using namespace std;

class stackArray {
    private: 
        int arr[100];
        int top;
    public:
        stackArray(){
            top = -1;
        }

        void push(int val) {
            if(top == 99){
                cout << "Stack overflow" << endl;
            }else {
                top++;
                arr[top] = val;
            }
        }

        void pop() {
            if(top == -1){
                cout << "Stack Empty" << endl;
            }else {
                cout << arr[top--] << endl;
            }
        }

        void peek() {
            if (top < 0) {
                cout << "Stack is empty" << endl;
            }else {
                cout << "Peek " << arr[top] << endl;
            }
        }

        void display() {
            if (top < 0) {
                cout << "Stack is empty" << endl;
                return;
            }
            cout << "Stack elements: ";
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

int main(){
    
    stackArray st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.display();
    st.peek();
    st.pop();
    st.pop();
    st.pop();
    st.display();
    return 0;
}