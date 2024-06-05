#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define MAX 1000

class Stack
{
    int top;

public:
    int a[MAX];

    Stack()
    {
        top = -1;
    }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

#endif
