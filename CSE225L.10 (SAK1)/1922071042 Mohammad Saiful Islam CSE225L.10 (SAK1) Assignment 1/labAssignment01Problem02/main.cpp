#include <iostream>
#include "stacktype.h"
#include "stacktype.cpp"

using namespace std;

string convertToString(char* a, int size)
{
    string newString = "";
    for (int i = 0; i < size; i++)
    {
        newString = newString + a[i];
    }
    return newString;
}

int main()
{
    cout << "Enter a String: ";
    string userInput;
    getline(cin,userInput);

    StackType<char> st(userInput.size());

    for (int i=0; i<userInput.size(); i++)
    {
        st.Push(userInput[i]);
    }

    char arr[userInput.size()];
    for(int i=0; i<userInput.size(); i++)
    {
        arr[i] = st.Top();
        st.Pop();
    }

    string reversedString = convertToString(arr, userInput.size());

    cout <<endl<< "Reverse of String is: ";
    cout << reversedString << endl;

    return 0;
}
