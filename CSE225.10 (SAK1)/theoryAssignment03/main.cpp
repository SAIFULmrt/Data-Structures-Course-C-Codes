#include <iostream>
#include "queuetype.h"
#include "queuetype.cpp"
using namespace std;

int main()
{
    //Checking Queue status
    cout<<"Checking Queue status: ";
    if (IsEmpty() == 1)
    {
        cout<<"Queue is Empty now"<<endl;
    }
    //else the Queue is not empty
    else
    {
        cout<<"Queue is not Empty"<<endl;
    }

    cout<<endl<<"How many item you want to Enqueue: ";
    int n;
    cin>>n;

    // Enqueue item to Queue
    int val;
    cout<<endl<<"Enter value to Enqueue in Queue: ";
    for(int i=0; i<n; i++)
    {
        cin>>val;
        enQueue(val);
    }

//Checking Queue status
    cout<<endl<<"Checking Queue status: ";
    if (IsEmpty() == 1)
    {
        cout<<"Queue is Empty"<<endl;
    }
    //else the Queue is not empty
    else
    {
        cout<<"Queue is not Empty"<<endl;
    }

    //Print Queue items
    cout<<endl<<"Print Queue items: ";
    PrintQueue();

//Dequeue item from Queue
    cout<<endl<<"How many item You want to Dequeue : ";
    cin>>n;
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        DeQueue();
    }
//Checking Queue status
    cout<<endl<<"Checking Queue status: ";
    if (IsEmpty() == 1)
    {
        cout<<"Queue is Empty"<<endl;
    }
    //else the Queue is not empty
    else
    {
        cout<<"Queue is not Empty"<<endl;
    }

    //Print Queue items
    cout<<endl<<"Print Queue items: ";
    PrintQueue();

    return 0;
}
