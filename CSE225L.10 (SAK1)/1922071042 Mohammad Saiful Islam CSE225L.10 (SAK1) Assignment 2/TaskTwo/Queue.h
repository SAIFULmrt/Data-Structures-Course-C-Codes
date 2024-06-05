#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#define SIZE 1000
class Queue
{
    int *arr;       
    int capacity;   
    int front;      
    int rear;       
    int count;     
 
public:
    Queue(int size = SIZE);     
    ~Queue();                   
 
    void dequeue();
    void enqueue(int x);
    int peek();
    int size();
    bool isEmpty();
    bool isFull();
};

#endif