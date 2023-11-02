#include<iostream>
using namespace std;
int add(int, int);
int add(int, int, int);
int main()
{
    int a,b,c;
    cout<<"Enter the two number: ";
    cin>>a>>b;
    cout<<"Sum is "<<add(a,b)<<endl;
    cout<<"Enter three number: ";
    cin>>a>>b>>c;
    cout<<"Sum is: "<<add(a,b,c)<<endl;

}
int add(int x, int y)
{
    int s= x+y;
    return s;
}
int add(int x,int y,int z)
{
    int s= x+y+z;
    return s;
}