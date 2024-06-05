#include "SingleLinkedList.h"
#include <iostream>
using namespace std;

void SingleLinkedList :: InsertDistinct(int data)
{
    if (!head)
    {
        head = new node(data);
        return;
    }
    if (head->data == data) return;
    node *var = head;
    while (var->next) var = var->next;
    var->next = new node(data);
    node *prev = head;
    node *cur = head->next;
    while (cur)
    {
        if (prev->data == cur->data)
        {
            prev->next = cur->next;
            free(cur);
            cur = prev->next;
        }
        else
        {
            prev = cur;
            cur = cur->next;
        }
    }
}
void SingleLinkedList :: PrintLinkedList()
{
    node *var = head;
    while (var)
    {
        cout << var->data << " ";
        var = var->next;
    }
    cout << "\n";
}
