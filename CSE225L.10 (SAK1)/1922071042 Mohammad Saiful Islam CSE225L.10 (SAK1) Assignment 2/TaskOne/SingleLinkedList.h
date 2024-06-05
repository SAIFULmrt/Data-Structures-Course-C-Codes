#ifndef SINGLELINKEDLIST_H_INCLUDED
#define SINGLELINKEDLIST_H_INCLUDED
class SingleLinkedList
{
public:
    struct node
    {
        int data;
        node *next;
        node(int _data)
        {
            data = _data;
            next = NULL;
        }
    };
    node *head = NULL;
    void InsertDistinct(int data);
    void PrintLinkedList();
};
#endif
