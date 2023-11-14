#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node *prev;

  Node(int data) {
    this->data = data;
    next = NULL;
    prev = NULL;
  }
};

class DoublyLinkedList {
public:
  Node *head;
  Node *tail;

  DoublyLinkedList() {
    head = NULL;
    tail = NULL;
  }

  void push(int data) {
    Node *new_node = new Node(data);
    if (head == NULL) {
      head = new_node;
      tail = new_node;
    } else {
      new_node->prev = tail;
      tail->next = new_node;
      tail = new_node;
    }
  }

  void bubbleSort() {
    bool swapp = true;
    Node *current = head;
    while (swapp) {
      swapp = false;
      Node *next = current->next;
      while (next != NULL) {
        if (current->data > next->data) {
          swap(current->data, next->data);
          swapp = true;
        }
        current = next;
        next = next->next;
      }
    }
  }

  void printList() {
    Node *current = head;
    while (current != NULL) {
      cout << current->data << " ";
      current = current->next;
    }
    cout << endl;
  }
};

