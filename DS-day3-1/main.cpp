#include <iostream>
#include "Node.h"
using namespace std;

int main()
{
    BST myTree;
    myTree.Add(5);
    myTree.Add(3);
    myTree.Add(6);
    myTree.Add(2);
    myTree.Add(1);
    myTree.Add(4);
    myTree.Add(7);
    myTree.Add(8);
      myTree.Traverse();
      Node* mn =myTree.MinLeft(myTree.root);
       cout <<endl<< "---------------------" << endl;
   cout <<mn->data ;
    cout <<endl<< "---------------------" << endl;
     Node* SD=myTree.Delete(myTree.root,);
     cout <<endl<< "after delete " << endl;
     myTree.Display(SD);
//    myTree.Traverse();
    return 0;
}
