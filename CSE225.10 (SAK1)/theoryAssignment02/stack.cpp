#include "stack.h"
using namespace std;

//creating structure
struct Node
{
    int info;
    struct Node *next;
};

//creating top node
struct Node* top = NULL;

//function for checking if the stack is empty
int isEmpty()
{
    if(top == NULL)
        return 1;
    return 0;
}

//function for pushing the data in the stack
void push(int value)
{
    //creating a new node to insert in the stack
    struct Node* node2 = (struct Node*) malloc(sizeof(struct Node));
    node2->info = value;
    node2->next = top;
    top = node2;
}

//function for poping data from the top of the stack
void pop()
{
    if(top==NULL)
        cout<<"Stack Underflow"<<endl;
    else
    {
        cout<<"The popped item is "<< top->info <<endl;
        top = top->next;
    }
}

//function for printing the elements of the stack
void PrintStack()
{
    struct Node* p;
    if(top==NULL)
        cout<<"stack is empty";
    else
    {
        p = top;
        cout<<"Stack items are: ";
        while (p != NULL)
        {
            cout<< p->info <<" ";
            p = p->next;
        }
    }
    cout<<endl;
}
