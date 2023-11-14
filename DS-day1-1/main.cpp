#include <iostream>
#include "Node.h"
using namespace std;

int main()
{
   LinkedList mylist;
   mylist.add(1);
   mylist.add(2);
   mylist.add(3);
   mylist.add(4);
   mylist.add(5);
   mylist.display();

    mylist.after (10,1);
    mylist.display();

    mylist.after(15,4);
    mylist.display();

    mylist.after(20,5);
    mylist.display();




int length = mylist.getLength();
cout << "Length of the linked list: " << length << endl;
    return 0;
}
