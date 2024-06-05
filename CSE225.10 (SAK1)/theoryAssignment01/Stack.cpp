#include "Stack.h"
using namespace std;

template <class ItemType>
Stack<ItemType>::Stack()
{
    top = -1;
}

template <class ItemType>
bool Stack<ItemType>::IsEmpty()
{
    return (top == -1);
}

template <class ItemType>
bool Stack<ItemType>::IsFull()
{
    return (top == MAX_ITEMS-1);
}

template <class ItemType>
void Stack<ItemType>::Push(ItemType newItem)
{
    if( IsFull() )
        throw FullStack();
    top++;
    items[top] = newItem;
}

template <class ItemType>
void Stack<ItemType>::Pop()
{
    if( IsEmpty() )
        throw EmptyStack();
    top--;
}
template <class ItemType>
ItemType Stack<ItemType>::Top()
{
    if (IsEmpty())
        throw EmptyStack();
    return items[top];
}
