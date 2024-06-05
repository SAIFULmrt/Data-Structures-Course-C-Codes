#include "Stack.cpp"
#include "Queue.cpp"
#include <iostream>
using namespace std;
int main()
{
    Stack stk;
    Queue que;
    int n, i, val;
    cout << "Enter the number of elements you want to input: ";
    cin >> n;
    cout << endl << "Enter elements: ";
    for (i = 1; i <= n; i++)
    {
        cin >> val;
        que.enqueue(val);
    }
    for (i = 1; i <= n; i++)
    {
        val = que.peek();
        stk.push(val);
        que.dequeue();
    }
    for (i = 1; i <= n; i += 2)
    {
        val = stk.peek();
        que.enqueue(val);
        stk.pop();
    }
    for (i = 1; i <= n; i += 2)
    {
        val = que.peek();
        que.enqueue(val);
        que.dequeue();
        val = stk.peek();
        que.enqueue(val);
        stk.pop();
    }
    for ( ; not que.isEmpty(); )
    {
        val = que.peek();
        stk.push(val);
        que.dequeue();
    }
    for ( ; not stk.isEmpty() ; )
    {
        val = stk.peek();
        que.enqueue(val);
        stk.pop();
    }
    cout << endl << "Output: ";
    for ( ; not que.isEmpty(); )
    {
        val = que.peek();
        cout << val << " ";
        que.dequeue();
    }
    cout << endl;
}
