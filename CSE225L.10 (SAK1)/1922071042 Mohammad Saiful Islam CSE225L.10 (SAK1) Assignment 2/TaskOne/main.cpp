#include <iostream>
#include "SingleLinkedList.cpp"
using namespace std;

int main()
{
    cout << "Enter the number of elements in SingleLinkedList: ";
    int n;
    cin >> n;
    cout << endl << "Enter Elements: ";
    SingleLinkedList list;
    int i = 1;
    int val;
    for (i = 1; i <= n; i++)
    {
        cin >> val;
        list.InsertDistinct(val);
    }
    cout << endl << "Distinct Elements: ";
    list.PrintLinkedList();
    return 0;
}
