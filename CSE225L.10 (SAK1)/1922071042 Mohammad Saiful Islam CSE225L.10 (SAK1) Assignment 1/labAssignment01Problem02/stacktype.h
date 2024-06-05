#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED

template <class ItemType>
class StackType
{
public:
    StackType(int);
    StackType();
    void Push(ItemType);
    void Pop();
    ItemType Top();
private:
    int top;
    ItemType *items;
};
#endif // STACKTYPE_H_INCLUDED
