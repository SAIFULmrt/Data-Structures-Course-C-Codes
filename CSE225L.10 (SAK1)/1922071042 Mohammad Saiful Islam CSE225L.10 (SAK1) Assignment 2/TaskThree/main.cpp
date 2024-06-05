#include <iostream>
#include "SingleLinkedList.cpp"
using namespace std;

int main()
{
    int n, i, val;
    SingleLinkedList list;
    cout << "Enter the number of elements in single linked list: ";
    cin >> n;
    cout << endl << "Enter Elements to insert in Single linked list: ";
    for (i = 1; i <= n; i++)
    {
        cin >> val;
        list.Insert(val);
    }
    list.RemoveMiddle();
    cout << endl << "Here the list after RemoveMiddle: ";
    list.ShowSingleLinkedList();
    return 0;
}
