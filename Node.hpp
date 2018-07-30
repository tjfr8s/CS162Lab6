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
