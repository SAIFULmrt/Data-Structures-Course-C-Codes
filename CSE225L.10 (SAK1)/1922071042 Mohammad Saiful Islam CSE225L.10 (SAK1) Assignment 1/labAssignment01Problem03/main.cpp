#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
using namespace std;

int main()
{

    UnsortedType var;

    int sizeA,sizeB;

    cout<<"Enter the size of 1st Unsorted Array: ";
    cin>>sizeA;

    int arr[sizeA];
    cout<<endl<<"Enter the value of 1st Unsorted Array: "<<endl;
    for(int i=0; i<sizeA; i++)
    {
        cin>>arr[i];
    }

    cout<<endl<<"Enter the size of 2nd Unsorted Array: ";
    cin>>sizeB;


    int array[sizeB];
    cout<<endl<<"Enter the value 2nd Unsorted Array: "<<endl;
    for(int i=0; i<sizeB; i++)
    {

        cin>>array[i];
    }
    int * arc=var.Repeatation(arr,sizeA,array,sizeB);

    for(int i=0; i<sizeA; i++)
    {
        cout<< *(arc + i)<<" ";
    }


    return 0;
}
