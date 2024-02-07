#include <iostream>
using namespace std;

void f1(int &, int &);
int add(int, int = 0, int = 0);
float area(float);
float area(int , int);
float area(float , float);
int max(int, int);
double max(double, double);
int sum(int, int);
int sum(int, int, int);


int main()
{
    // // For f1() function
    // int a, b;
    // cout << "Enter two number to swap a= ";
    // cin >> a;
    // cout << "b= ";
    // cin >> b;
    // f1(a, b);

    // // For add() function
    // int a1, b1, c1;
    // cout << "To add two number-->\n Enter two number ";
    // cin >> a1>>b1;
    // cout << "The sum of two numbers: " << add(a1, b1)<<endl;
    // cout << "To add three number-->\n Enter two number ";
    // cin >> a1>>b1>>c1;
    // cout << "The sum of three numbers: " << add(a1, b1, c1)<<endl;


    // for area(function)

    // int a2,b2;
    // cout<<"Enter the radius of circle ";
    // cin>>a2;
    // cout<<"The area of circle is: "<<area(a2)<<endl;

    // cout<<"Enter the length and bredth of ractangle: ";
    // cin>>a2>>b2;
    // cout<<"The area of rectangle is: "<<area(a2,b2)<<endl;

    // float a3,b3;
    // cout<<"Enter the base and perpendicular hight of a triangle: ";
    // cin>>a3>>b3;
    // cout<<"The area of the triangle is: "<<area(a2,b2)<<endl;

    
    // For function max()

    float a4,b4,c4;
    cout<<"Enter the two number: ";
    cin>>a4>>b4;
    cout<<"The greatest number is: "<<max(a4,b4)<<endl;

    int a5,b5,c5;
    cout<<"Enter two number: "; 
    cin>>a5>>b5;
    cout<<"The sum is: "<<sum(a5,b5)<<endl;
    cout<<"Enter three number: "; 
    cin>>a5>>b5>>c5;
    cout<<"The sum is: "<<sum(a5,b5,c5)<<endl;


    return 0;
}

//============[ 1. CPP Function to swap data of two int variable using call by reference  ]=============
void f1(int &m, int &n)
{
    int temp;
    temp = m;
    m = n;
    n = temp;
    cout << "a= " << m << " b= " << n<<endl;
}
//============[ 2. CPP Function using defalut argumente that able to add 2 or 3 numbers ]=============
int add(int x, int y, int z)
{
    return x + y + z;
}
//====[ 3. CPP Function for Function overloading to calculate area of circle, rectangle, triangle ]===
float area(float r) // For circle
{
    float pi = 3.142;
    float A = pi*r*r;
    return A;
}
float area(int L, int B) // For rectrangle
{
    float A = 0.0;
    A = L * B;
    return A;
}
float area(float base, float hight) // For triangle
{
    float A = 1.0 / 2 * (base * hight);
    return A;
}
//====[ 4. CPP Function for check MAX number in integer and real  ]===
int max(int x, int y)
{
    if(x>y)
        return x;
    else
        return y;
}
double max(double x, double y)
{
     if(x>y)
        return x;
    else
        return y;
}
//============[ 5. CPP Function   ]=============

int sum(int x, int y)
{
    return x+y;
}
int sum(int x, int y, int z)
{
    return x+y+z;
}