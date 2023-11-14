#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int _data) {
        data =_data;
        next = NULL; // م فيش داتاعشان فاضيه
    }
};

class Queue {
private:
    Node* Front;
    Node* rear;

public:
    Queue() {
        Front = NULL; // م فسش نود

        rear = NULL;  // م فسش نود
    }

    void enqueue(int data) {
        Node* NewNode = new Node(data);  //كلاس النود
        if (Front == NULL && rear == NULL) {
            Front = NewNode;
            rear = NewNode;
        } else {
            rear->next = NewNode;
            rear = NewNode;
        }
    }

    int dequeue() {
        if (Front == NULL && rear == NULL) {
//            return -1;
//        } else {
            Node* temp = Front;   //
            Front = Front->next;
            delete temp;
//            int data = temp->data;
//            if (Front == NULL) {
//                rear = NULL;
//            }
//            return data;
        }
    }

    int getFront() {
        if (Front == NULL && rear == NULL) {
            return -1;
        } else {
            return Front->data;
        }
    }

    void display() {
        if (Front == NULL && rear == NULL) {
            cout << "Queue is empty." << endl;
        } else {
            Node* current = Front;
            while (current != NULL) {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }
    }
};

#endif // NODE_H
