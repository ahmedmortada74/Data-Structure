#ifndef NODE_H
#define NODE_H
#include <iostream>
#include "Node.h"
using namespace std;


class Node
{
   public:
       int data;
       Node* prev;
      Node* next;

       Node(int _data){
            data= _data;
            prev = next = NULL; //مش بيشاورو ع حاجه ف هنستخدم
       }
};
class LinkedList{
private :      // يييمعلومتين معروفين head ,tail
    Node* head;
    Node* tail;//للنود
public:
    LinkedList()
    {
        head=tail=NULL;
    }
    //new NODE
    void add(int data)
    {
        Node* newNode= new Node(data);//انستانس من كلاس النود
        if(head==NULL &&tail==NULL)
        {
           head=tail=newNode;
        }else{
            tail ->next = newNode;
            newNode ->prev = tail;
            tail=newNode;
        }
    }
        void display()
        {
            Node* temp =tail;
            while(temp!=NULL)
            {
                cout<<temp->data<<"\t";
            temp=temp->prev;
            }
        }
 Node* Search(int data){
        Node* temp = head;

        while(temp != NULL){
            if(temp->data == data){
                return temp;
            }
            temp = temp->next;
        }
        return NULL;
    }

void after(int Nextdata, int Newdata){

       Node* NextNode = Search(Nextdata);
        Node* NewNode = new Node(Newdata);

        if(NewNode ==tail ){
            tail -> next = NewNode;
            NewNode->prev = tail;
            tail = NewNode;
        }else  {                                   //اضافة رقم غير معلوم
            NewNode->next = NextNode->next;
        NewNode->prev = NextNode;
        NewNode->next->prev = NewNode;
        NextNode->next = NewNode;
    }
    }

// دالة بتزود
    int getLength(){
      int  count=0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next; // بيتحرك ناحية الnext
    }
    return count;
}


};


#endif // NODE_H
