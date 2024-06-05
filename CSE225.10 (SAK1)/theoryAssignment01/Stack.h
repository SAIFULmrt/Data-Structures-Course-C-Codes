#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED

const int MAX_ITEMS = 5;
class FullStack
{};
class EmptyStack
{};

template <class ItemType>

class Stack
{
public:
    Stack();
    bool IsFull();
    bool IsEmpty();
    void Push(ItemType);
    void Pop();
    int top;
    ItemType Top();
private:

    ItemType items[MAX_ITEMS];
};

#endif // STACKTYPE_H_INCLUDED
