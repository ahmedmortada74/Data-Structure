#include <iostream>
#include "Node.h"

using namespace std;

int main()
{
      Queue queue;
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.display();  // Output: 10 20 30

    queue.getFront();


    queue.dequeue();

    queue.display();  // Output: 20 30

    return 0;
}
