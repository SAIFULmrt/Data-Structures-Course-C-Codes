#include "queuetype.h"
using namespace std;

//creating structure
struct Node
{
    int info;
    struct Node *next;
};

//creating front and rear node
struct Node* front = NULL;
struct Node* rear = NULL;

//function for checking if the Queue is empty
int IsEmpty()
{
    if(front == NULL)
        return 1;
    return 0;
}

//function for Enqueue the data in the Queue
void enQueue(int value)
{
    //creating a new node to insert in the Queue
    struct Node* node2 = (struct Node*) malloc(sizeof(struct Node));
    node2->info = value;
    node2->next = NULL;
    if(rear == NULL)
        front = node2;
    else
        rear->next = node2;
    rear = node2;
}

//function for Dequeue data from the front of the Queue
void DeQueue()
{
    if(IsEmpty())
        cout<<"Queue Underflow"<<endl;
    else
    {
        cout<<"The Dequeue item is "<< front->info <<endl;
        front = front->next;
    }
}

//function for printing the elements of the Queue
void PrintQueue()
{
    struct Node* p;
    if(front==NULL)
        cout<<"Queue is empty";
    else
    {
        p = front;
        cout<<"Queue items are: ";
        while (p != NULL)
        {
            cout<< p->info <<" ";
            p = p->next;
        }
    }
    cout<<endl;
}
