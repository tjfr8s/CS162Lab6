#ifndef QUEUE_HPP
#define QUEUE_HPP
#include "Node.hpp"

class Queue
{
private:
    QueueNode* m_head;
public:
    Queue();
    ~Queue();
    bool isEmpty();
    void addBack(int val);
    int getFront();
    void removeFront();
    void printQueue();
};

#endif
