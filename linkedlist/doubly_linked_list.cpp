#include<iostream>
using namespace std;

class node {
    public:
        int data;
        node *prev;
        node *next;

        node() {
            next = nullptr;
            prev = nullptr;
        }
};

class DLL {
    private: 
        node *head = nullptr;
            
    public:
        void insertAtEnd(int val) {
            node *temp = new node();
            

            temp -> data = val;
            if(head == nullptr) {
                head = temp;
            }else {
                node *t = head;
                while (t->next != nullptr)
                {
                    t = t -> next;
                }

                t -> next = temp;
                temp -> prev = t;
            }            
        }

        void insertAtBegin(int val) {
            node *temp = new node();
            temp -> data = val;
            if(head == nullptr){
                head = temp;
            }else {
                temp->next = head;
                head->prev = temp;
                head = temp;
            }     
        }

        void deletaionAtBegin() {
            if (head == nullptr) return;

            node *temp = head;
            head = head->next;
            if (head != nullptr) {
                head->prev = nullptr;
            }
            delete temp;
        }

        void deletionAtEnd() {
            if (head == nullptr) {
                return;
            }

            if (head->next == nullptr) {
                delete head;
                head = nullptr;
                return;
            }

            node *temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }

            temp->prev->next = nullptr;
            delete temp;
        }


        void printList() {
            node *temp = head;

            while(temp != nullptr){
                cout << temp->data << endl;
                temp = temp -> next;
            }
            cout << endl;
        }

};

int main(){
    DLL list;
    list.printList();
    list.insertAtBegin(10);
    list.insertAtBegin(20);
    list.insertAtBegin(30);
    list.insertAtEnd(40);
    list.insertAtEnd(50);
    list.insertAtEnd(60);
    list.deletaionAtBegin();
    list.deletionAtEnd();
    list.printList();
    return 0;
}