#include <iostream>
using namespace std;

class node {
    public:
        int data;
        node *next;

    node () {
        next = nullptr;
    }
};

class LinkedList {
    node *head;

    public:
        LinkedList(){
            head = nullptr;
        }
    void insertAtBeg(int value){
        node *temp = new node();
        temp -> data = value;
        temp -> next = head;
        head = temp;
    }
    void insertAtEnd(int value){
        node *newValue = new node();
        if(head == nullptr) {
            head = newValue;
            return;     
        }
        node *temp = head;

        while (temp->next != nullptr)
        {
            temp = temp->next;
        }

        temp ->next = newValue;            
        
    }
    void print(){
        if(head == nullptr) {
            cout << "List is empty.";      
        }else{
            node *temp = head;

            while (temp != nullptr)
            {
                cout << temp->data << "->";
                temp = temp->next;
            }
            
        }
    }
};

int main(){

    LinkedList l1;
    LinkedList l2;
    
    l1.insertAtBeg(10);
    l1.insertAtBeg(20);
    l1.insertAtBeg(30);
    l1.insertAtBeg(40);
    l1.print();

    l2.insertAtEnd(60);
    l2.insertAtEnd(70);
    l2.insertAtEnd(80);
    l2.insertAtEnd(90);
    l2.print();

    return 0;
}

