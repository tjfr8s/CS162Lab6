/*******************************************************************************
 * Author: Tyler Freitas
 * Date: 20180730
 * Description: This file describes a node for a queue class. It has data
 * members to store the addresses of the next and previous values in the list.
 * It has appropriate get and set functions.
*******************************************************************************/ 
#ifndef NODE_HPP
#define NODE_HPP

struct QueueNode
{
private:
    QueueNode* m_next;
    QueueNode* m_prev;
    int m_val;
public:
    QueueNode* getNext() {return m_next;}
    QueueNode* getPrev() {return m_prev;}
    int getVal() {return m_val;}

    void setNext(QueueNode* next) { m_next = next;}
    void setPrev(QueueNode* prev) { m_prev = prev;}
    void setVal(int val) {m_val = val;}
};

#endif
