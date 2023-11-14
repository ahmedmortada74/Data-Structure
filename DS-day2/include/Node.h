#ifndef NODE_H
#define NODE_H
#include <iostream>
#include  "Node.h"
using namespace std;

class Node {
    public:
    int data;
    Node* next;
      Node(int _data){
    data=_data;
    next=NULL;
    }
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    void push(int data) {
        Node* NewNode = new Node(data);
        if (top==NULL)
            {
            top=NewNode;
        }else{
        NewNode->next=top;
        top=NewNode;
        }
   }
//بتحذف اخر حاجة اتضافت
    void pop() {
        if (top== NULL) {
            cout << "Stack is empty." << endl;
            return;
        }

        Node* temp = top;
        top= top->next;
        delete temp;
    }

    int peek() {
        if (top == NULL) {
            cout << "Stack is empty." << endl;
            return -1;
        }

        return top->data;
    }

    void display() {
        if (top== NULL) {
            cout << "Stack is empty." << endl;
            return;
        }

        Node* current = top;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};



#endif // NODE_H
