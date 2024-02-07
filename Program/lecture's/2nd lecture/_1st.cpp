//=====================[ inline request ]==================

// #include <iostream>
// using namespace std;
// inline int add(int, int );       // using inline request
// int main()
// {
//     int a,b;
//     cout<<"Enter the two nubmer to add ";
//     cin>>a>>b;
//     cout<<"The sum of two number is "<<add(a, b)<<endl;
//     return 0;
// }
// int add(int x, int y)
// {
//     return x+y;
// }

//=====================[ Defualt Argument ]==================
// #include <iostream>
// using namespace std;
// int add(int, int, int=0 );       // default argumante 
// int main()
// {
//     int a,b;
//     cout<<"Enter the two nubmer to add ";
//     cin>>a>>b;
//     cout<<"The sum of two number is "<<add(a, b)<<endl;

//     int c;
//     cout<<"Enter three numbers";
//     cin>>a>>b>>c;
//     cout<<"The sum of two number is "<<add(a, b, c);
//     cout<<endl;
//     return 0;
// }
// int add(int x, int y, int z)
// {
//     return x+y+z;
// }

//=====================[ Formal Argument ]==================
#include <iostream>
using namespace std;
void f1(int,int);           // Call by value
void f2(int*,int*);         // Call by address
void f3();                  // Call by Reference
int main()
{
    int a,b;
    cout<<"Enter the two nubmer to add ";
    cin>>a>>b;
    f1(a,b);        //Call by value.
    f2(&a,&b);      //Call by Address.
    f3();           //Call by Reference.
    cout<<endl;
    return 0;
}
void f1(int x, int y)
{

}
void f2(int *p, int *q)
{

}