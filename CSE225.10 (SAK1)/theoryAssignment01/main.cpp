#include <iostream>
#include<algorithm>
#include "Stack.h"
#include "Stack.cpp"
using namespace std;

bool areBracketsBalanced(string expr)
{
    Stack<char> s;
    char x;

    for (int i = 0; i < expr.length(); i++)
    {
        if (expr[i] == '(' || expr[i] == '['
                || expr[i] == '{')
        {
            // Push the element in the stack
            s.Push(expr[i]);
            continue;
        }

        // current current character is not opening bracket. So stack
        // cannot be empty at this point.
        if (s.IsEmpty())
            return false;

        switch (expr[i])
        {
        case ')':

            // Store the top element in a
            x = s.Top();
            s.Pop();
            if (x == '{' || x == '[')
                return false;
            break;

        case '}':

            // Store the top element in b
            x = s.Top();
            s.Pop();
            if (x == '(' || x == '[')
                return false;
            break;

        case ']':

            // Store the top element in c
            x = s.Top();
            s.Pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }

    // Check Empty Stack
    return (s.IsEmpty());
}


int main()
{

    cout <<"Enter expression: " << endl;

    Stack<char> st1;
    string expr;

    getline(cin,expr);


    Stack<char> s;
    char x;

    // Function call
    if (areBracketsBalanced(expr))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;

}
