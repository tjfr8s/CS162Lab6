#include "Queue.hpp"
#include <iostream>


Queue::Queue(): m_head(nullptr)
{
}

Queue::~Queue()
{
    while(!isEmpty())
    {
        removeFront();
    }
}

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
        m_head->setPrev(remove=>getPrev());
        remove->getPrev()->setNext(m_head);
        delete remove;
        remove = nullptr;
    }
}

int Queue::getFront()
{
    return m_head->getVal();
}

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
        m_head = newNode;
        newNode = nullptr;
    }
}


void Queue::printQueue()
{
    QueueNode* next = m_head;
    bool atEnd = false;
    while(!atEnd)
    {
        if(next->getNext() == m_head)
        {
            atEnd = true;
        }
        std::cout << next->getVal() << std::endl;
    }
}
