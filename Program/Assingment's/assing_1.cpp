#include<iostream>
using namespace std;

//==========================[ 1. program to check the number is even or odd ]===========
int f1()
{   
    int n;
    cout<<"Enter the number ";
    cin>>n;
    if(n%2==0)
    {
        cout<<n <<" is even";
    }
    else
        cout<<n <<" is odd";

    return 0;
}

//==========================[ 2. Calculate the factorial of a number  ]==============

int f2()
{   
    int n, factorial=1;
    cout<<"Enter the number ";
    cin>>n;
    for(int i=1;i<=n;i++)   
        {
          factorial*=i;
        }
        cout<<factorial; 
    return 0;
}

//==========================[ 3. Program to swap the value of two int variables  ]==============

int f3()
{
    int a,b,c;
    cout<<"Enter the two number "<<endl;
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<"after the swaping the value of a = "<<a <<" b = "<<b; 

    return 0;
}



//===================[ 4. write a function to calculate LCM of two numbers ]====================


int f4(int a,int b)
{
    int L;
    for(L=a>b? a:b; L<=a*b; L++)
        if(L%a==0&&L%b==0)
           return L;  // (to print the value)>>   cout<<f5(56,34);

}

//======== ====[ 5. write a function to check wether the number is prime or not (TSRS) ]==============

int f5(int x)
{      
    int i;
    for(i=2;i<x;i++)
        if(x%2==0)
            return 0;
        return 1;

}
    //  To check the answer print this in main() function //

      //     int result = f5(11);
      // if(result==1)
      //     cout<<"\nnot a prime number"<<endl;
      // else
      //     cout<<"\nprime number\n"<<endl;
      //     return 0;

int main()
{
   
}


