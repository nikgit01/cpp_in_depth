#include<iostream>
using namespace std;

int f1()
{
    cout<<endl <<"Hello MysirG";
    cout<<endl <<"Hello MysirG"<<endl;
    return 0;
}
//====================[ 2. program to calculate the sum of two number ]==============
void f2()
{
    int a,b,c;
    cout<<"Enter the two nuber"<<endl;
    cin>>a>>b;
    c=a+b;
    cout<<"the sum of "<< a << " and " << b <<" is: "<<c<<endl;
//====================[ 3. program to calculate the area of circle ]==============
}
void f3()
{
    float pi=3.1428,area;
    int radius;
    cout<<"Enter the radius of circle: ";
    cin>>radius;
    area=pi*radius*radius;
    cout<<"the area of circle is: "<<area<<endl;
}
//====================[ 4. program to calculate the volume of a cuboid ]==============
void f4()
{
    float lenth, breadth, hight, voluum;
    cout<<"Enter the length, breadth, hight of a cuboid in CM : ";
    cin>>lenth>>breadth>>hight;
    voluum=lenth*breadth*hight;
    cout<<"The volume of the cuboid is: "<<voluum<<" cm^2";
    cout<<endl;
}
int main()
{
    f1();
    f2();
    f3();
    f4();
    return 0;
}