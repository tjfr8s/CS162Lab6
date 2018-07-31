#include "Queue.hpp"
/*******************************************************************************
 * Author: Tyler Freitas
 * Date: 20180730
 * Description: This file describes a queue class. It is a fifo data structure
 * with member functions for checking if the queue is empty, adding values to 
 * the back, getting the front value, removing the front value, and printing
 * the queue.
*******************************************************************************/ 
#include <iostream>


/*******************************************************************************
 * Description: Constructor that initializes m_head to null
*******************************************************************************/ 
Queue::Queue(): m_head(nullptr)
{
}

/*******************************************************************************
 * Description: Destructor that frees all elements in linked list
*******************************************************************************/ 
Queue::~Queue()
{
    while(!isEmpty())
    {
        removeFront();
    }
}

/*******************************************************************************
 * Description: This function returns true if the list is empty and false 
 * otherwise.
*******************************************************************************/ 
bool Queue::isEmpty()
{
    if(m_head == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*******************************************************************************
 * Description: Adds val to the back of the list.
*******************************************************************************/ 
void Queue::addBack(int val)
{
    QueueNode* newNode = new QueueNode;
    newNode->setVal(val);
    if(isEmpty())
    {
        m_head = newNode;
        m_head->setNext(m_head);
        m_head->setPrev(m_head);
        newNode = nullptr;
    }
    else
    {
        m_head->getPrev()->setNext(newNode);
        newNode->setPrev(m_head->getPrev());
        newNode->setNext(m_head);
        m_head->setPrev(newNode);
        newNode = nullptr;
    }
}

/*******************************************************************************
 * Description: This function remove the value at the front of the list.
*******************************************************************************/ 
void Queue::removeFront()
{
    if(isEmpty())
    {
    }
    else if(m_head == m_head->getNext())
    {
        delete m_head;
        m_head = nullptr; 
    }
    else
    {
        QueueNode* remove = m_head;
        m_head = remove->getNext(); 
        m_head->setPrev(remove->getPrev());
        remove->getPrev()->setNext(m_head);
        delete remove;
        remove = nullptr;
    }
}

/*******************************************************************************
 * Description: This funciton returns the value stored in the front node
 * of the queue.
*******************************************************************************/ 
int Queue::getFront()
{
    if(!isEmpty())
    {
        return m_head->getVal();
    }
    else
    {
        return 0;
    }
}



/*******************************************************************************
 * Description: This function prints the contents of the queue.
*******************************************************************************/ 
void Queue::printQueue()
{
    QueueNode* next = m_head;
    bool atEnd = false;
    
    while(!atEnd && !isEmpty())
    {
        if(next->getNext() == m_head)
        {
            atEnd = true;
        }
        std::cout << next->getVal() << " ";
        next = next->getNext();
    }
}
