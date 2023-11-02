#include <iostream>
using namespace std;
void sort(int A[],int size,bool asc=true);
void sort(int A[],int size,bool asc)
{
    int r,i,t;
    for(r=1; r<size; r++)
    {
        for(i=0; i<=size-1-r; i++)
        {
            if(asc==true&&A[i]>A[i+1])
            {
                t=A[i];
                A[i]=A[i+1];
                A[i+1]=t;
            }
        }
    }
}