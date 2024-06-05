#include <iostream>
#include "Index.h"
#include "Index.cpp"

using namespace std;

int main()
{
    Index index;

    int N,key, i = 0;

    cout<<"Enter the size of Unsorted Array: ";

    cin>>N;

    int arr[N];

    cout<<endl<<"Enter the value:"<<endl;

    while(i<N)
    {
        cin>>arr[i];
        i++;
    }

    cout<<endl<<"Enter the value of element, that you want to search:" <<endl;

    cin>>key;
    cout<<endl;
    int ans=index.IndexFunc(arr,key,N);

    if(ans == -1)
    {
        cout<<"Index : "<< ans;
    }
    else
    {
        cout<<"Found at Index : "<< ans;
    }

    cout<<endl;

    return 0;
}
