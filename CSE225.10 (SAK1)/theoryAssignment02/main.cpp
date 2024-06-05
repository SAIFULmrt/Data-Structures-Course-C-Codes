#include <iostream>
#include "stack.h"
#include "stack.cpp"
using namespace std;

int main()
{
    //Checking Stack status
    cout<<"Checking Stack status: ";

    if (isEmpty() == 1)
    {
        cout<<"Stack is Empty now"<<endl;
    }


    cout<<endl<<"How many item you want to Push: ";
    int n;
    cin>>n;

    int val;
    // push item to stack
    cout<<endl<<"Enter value to push in Stack: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>val;
        push(val);
    }

//Checking Stack status
    cout<<endl<<"Checking Stack status: ";

    if (isEmpty() == 1)
    {
        cout<<"Stack is Empty"<<endl;
    }
    //else the stack is not empty
    else
    {
        cout<<"Stack is not Empty"<<endl;
    }

    //Print stack items
    cout<<endl<<"Print Stack items: ";
    PrintStack();

//Pop item from stack
    cout<<endl<<"How many item You want to Pop : "<<endl;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        pop();
    }
//Checking Stack status
    cout<<endl<<"Checking Stack status: ";
    if (isEmpty() == 1)
    {
        cout<<"Stack is Empty"<<endl;
    }
    //else the stack is not empty
    else
    {
        cout<<"Stack is not Empty"<<endl;
    }

    //Print stack items
    cout<<endl<<"Print Stack items: ";
    PrintStack();

    return 0;
}
