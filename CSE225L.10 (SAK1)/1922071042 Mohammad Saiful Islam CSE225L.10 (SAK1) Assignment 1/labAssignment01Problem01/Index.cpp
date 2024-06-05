#include "Index.h"
#include<iostream>
using namespace std;

int Index::IndexFunc(int *arr, int key,int n)
{
    int flag = -1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            cout<<"Entered value is: "<<arr[i]<<endl;
            flag=i;
            break;
        }
    }
    return flag;
}
