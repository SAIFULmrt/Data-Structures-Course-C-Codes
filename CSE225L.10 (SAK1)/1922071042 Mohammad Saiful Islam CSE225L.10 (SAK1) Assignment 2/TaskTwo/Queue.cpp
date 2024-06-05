#include "Queue.h"
#include <bits/stdc++.h>
using namespace std;

Queue::Queue(int size)
{
    arr = new int[size];
    capacity = size;
    front = 0;
    rear = -1;
    count = 0;
}
Queue::~Queue()
{
    delete[] arr;
}
void Queue::dequeue()
{
    if (isEmpty())
    {
        exit(EXIT_FAILURE);
    }
    front = (front + 1) % capacity;
    count--;
}
void Queue::enqueue(int item)
{
    if (isFull())
    {
        exit(EXIT_FAILURE);
    }
    rear = (rear + 1) % capacity;
    arr[rear] = item;
    count++;
}
int Queue::peek()
{
    if (isEmpty())
    {
        exit(EXIT_FAILURE);
    }
    return arr[front];
}
int Queue::size()
{
    return count;
}
bool Queue::isEmpty()
{
    return (size() == 0);
}
bool Queue::isFull()
{
    return (size() == capacity);
}
