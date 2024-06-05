#include "SingleLinkedList.h"
#include <iostream>
using namespace std;

void SingleLinkedList :: Insert(int data)
{
    if (head == NULL)
    {
        head = new node(data);
        return;
    }
    node *var = head;
    while (var->next != NULL)
    {
        var = var->next;
    }
    var->next = new node(data);
    elements++;
}
void SingleLinkedList :: ShowSingleLinkedList()
{
    node *var = head;
    while (var)
    {
        cout << var->data<< " ";
        var = var->next;
    }
    cout << endl;
}
void SingleLinkedList :: RemoveMiddle()
{
    if (elements == 0 or elements == 1)
    {
        cout << "NULL elements\n";
        return;
    }
    node *var = head;
    int i;
    if (elements % 2 == 0) i = 1;
    else i = 0;
    for (; i < (elements / 2); i++)
    {
        var = var->next;
    }
    node *here = var->next;
    var->next = here->next;
    free(here);
}
