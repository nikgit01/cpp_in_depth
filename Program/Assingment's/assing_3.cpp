#include <iostream>
using namespace std;
//==========[ 1. CPP Function to print all prime number between two given number]==============

int isprime(int n)
{
    int i;
    for(i=2;i<n;i++)
        if(n%i==0)
           return 0;
    return 1;
}
void printPrime()       
{
    int a,b,x;
    cout<<"Enter the number between you want to check : ";
    cin>>a>>b;
    for(x=a+1;x<b;x++)
        {
            if(isprime(x))
                cout<<x<<" ";
        }
}
//============[ 2. CPP Function to find the hightest digit in a a given number  ]=============
void f2()
{
    int num;
    cout<<"Enter A number:  ";
    cin>>num;
    int maxdigit;
    maxdigit=num%10;
    num=num/10;
    while(num)
    {
        if(maxdigit<num%10)
            maxdigit%10;
        num/=10;
    }
    cout<<maxdigit<<endl;
}
//============[ 2. CPP Function to   ]=============

void f3()
{
    int x,y;
    cout<<"Enter number base number and power number: ";
    cin>>x>>y;
    int count,sq=x;
    for(count=1;count<y;count++)
         sq=sq*x;
    cout<<sq;
}


int main()
{   
    // f2();
    // printPrime();
    f3();
    return 0;
}