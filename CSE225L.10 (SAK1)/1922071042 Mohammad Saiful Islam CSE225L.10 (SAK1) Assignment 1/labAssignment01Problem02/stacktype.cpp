#include <iostream>
#include "stacktype.h"

template <class ItemType>
StackType<ItemType>::StackType()
{
    top = -1;
}
template<class ItemType>
StackType<ItemType>::StackType(int s)
{
    items = new ItemType[s];
}
template <class ItemType>
ItemType StackType<ItemType>::Top()
{
    return items[top];
}
template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem)
{
    top++;
    items[top] = newItem;
}
template <class ItemType>
void StackType<ItemType>::Pop()
{
    top--;
}
