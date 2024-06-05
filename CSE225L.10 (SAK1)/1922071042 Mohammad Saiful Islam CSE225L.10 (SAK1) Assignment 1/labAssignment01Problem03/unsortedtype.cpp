#include "unsortedtype.h"
#include<iostream>
using namespace std;

int *UnsortedType::Repeatation(int *arr,int N,int *array,int M)
{
    int flag=-1;

    if(N<=M)
    {
        int art[N];
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<M; j++)
            {
                if(arr[i]==array[j])
                {
                    flag++;
                    art[flag]=arr[i];
                    array[j]=NULL;
                    break;
                }
            }
        }
        cout<<endl<<"Common Values are: ";



        for(int i=0; i<=flag; i++)
        {
            cout<<art[i]<< " ";
        }


        cout<<" "<<endl;
        cout<<"Result : "<<flag+1<<endl;
        return art;

    }
    else
    {
        int art[M];
        for(int i=0; i<M; i++)
        {
            for(int j=0; j<N; i++)
            {
                if(arr[i]==array[j])
                {
                    flag++;
                    art[flag]=arr[i];
                    array[j]=NULL;
                    break;
                }
            }
        }
        cout<<endl<<"Common Values are: ";
        for(int i=0; i<=flag; i++)
        {
            cout<<art[i]<< " ";
        }
        cout<<" "<<endl;
        cout<<"Result : "<<flag+1<<endl;
        return art;

    }
}
