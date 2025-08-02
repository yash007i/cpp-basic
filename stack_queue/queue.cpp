#include<iostream>
using namespace std;

class QueueArray {
    private: 
        int arr[10];
        int front, rear;
    public:
        QueueArray(){
            front= -1 ,rear = -1;
        }

        void enqueue(int val){
            if(rear == 9){
               cout << "Queue overflow" << endl;
            }else {
                if(front == -1 ){
                    front = rear = 0;
                    arr[front] = val;
                }else {
                    rear ++;
                    arr[rear] = val;
                }
            }
        }

        void deque () {
            if(rear == -1){
                cout << "Empty!" <<endl;
            }else {
                if(front == rear) {
                    cout << arr[front] << endl;
                    front --;
                    rear --;
                }else {
                    cout << arr[front] << endl;
                    front ++;
                }
            }
        }
};

int main(){
    
    QueueArray que;
    que.enqueue(10);
    que.enqueue(20);
    que.enqueue(30);
    que.enqueue(40);
    que.enqueue(50);
    return 0;
}