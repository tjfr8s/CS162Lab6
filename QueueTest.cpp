#include <iostream>
#include "Node.hpp"
#include "Queue.hpp"

int main()
{
    Queue queue;

    queue.addBack(4);
    queue.addBack(3);
   queue.addBack(7);
    queue.printQueue();

    queue.removeFront();
    queue.removeFront();

    queue.printQueue();
    return 0;
}
