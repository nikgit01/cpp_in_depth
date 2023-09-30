// #include<stdio.h>
// int main()
// {
//     int x=4;
//     printf("Enter a number");
//     scanf("%d",&x);
//     int y=x*x;
//     printf("Square of %d is %d",x,y);
//     return 0;
// }

//====================[ change in program with cout<<  and  cin<<  ]====================

#include<iostream>
using namespace std;          // insted of  std:: 
int main()
{
    int x=4;
    cout<<"Enter a number" <<endl;
    cin>>x;
    int y=x*x;
    cout<<"Square of " <<x<<" is "<<y;
    return 0;
}