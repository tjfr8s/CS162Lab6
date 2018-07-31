/*******************************************************************************
 * Author: Tyler Freitas
 * Date: 20180730
 * Description: This file describes a queue class. It is a fifo data structure
 * with member functions for checking if the queue is empty, adding values to 
 * the back, getting the front value, removing the front value, and printing
 * the queue.
*******************************************************************************/ 
#ifndef QUEUE_HPP
#define QUEUE_HPP
#include "Node.hpp"

class Queue
{
private:
    QueueNode* m_head;
public:
/*******************************************************************************
 * Description: Constructor that initializes m_head to null
*******************************************************************************/ 
    Queue();

/*******************************************************************************
 * Description: Destructor that frees all elements in linked list
*******************************************************************************/ 
    ~Queue();

/*******************************************************************************
 * Description: This function returns true if the list is empty and false 
 * otherwise.
*******************************************************************************/ 
    bool isEmpty();

/*******************************************************************************
 * Description: Adds val to the back of the list.
*******************************************************************************/ 
    void addBack(int val);

/*******************************************************************************
 * Description: This function remove the value at the front of the list.
*******************************************************************************/ 
    void removeFront();

/*******************************************************************************
 * Description: This funciton returns the value stored in the front node
 * of the queue.
*******************************************************************************/ 
    int getFront();


/*******************************************************************************
 * Description: This function prints the contents of the queue.
*******************************************************************************/ 
    void printQueue();
};

#endif
