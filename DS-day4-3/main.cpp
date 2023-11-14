#include <iostream>
#include  "Node.h"
using namespace std;
int main() {
  DoublyLinkedList lis;
  lis.push(37);
  lis.push(35);
  lis.push(33);
  lis.push(36);
  lis.push(32);

  cout << " before:" << endl;
  lis.printList();

//  ظظlis.bubbleSort();
     lis.bubbleSort();

  cout << "\n after :" << endl;
     lis.printList();

  return 0;
}
