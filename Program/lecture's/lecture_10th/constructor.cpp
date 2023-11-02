#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;
public:
    complex() {}    // Constructors 
    complex(int x) {a=x; b=0;}
    complex(int x, int y) { a=x; b=y;}
    complex(complex &C)
    {
        a=C.a;
        b=C.b;
    }

    void set_data(int x, int y)
    {
        a = x;
        b = y;
    }
    ~complex()      // Destuctor
    {
        cout<<"The ENd ";
    }
    void show_data()
    {
        cout << "a= " << a << " b= " << b << endl;
    }
    complex add(complex C)
    {
        complex temp(0,0);
        temp.a=a+C.a;
        temp.b=b+C.b;
        return temp;
    }
}; 
int main()
{
    complex c1(2), c2(2,4), c3(3,4);
    complex c4=c2;      // Here the 
    c1.show_data();
    c2.show_data();
    c3.show_data();
    // c3=c1.add(c2);
    // c3.show_data();
    return 0;
}
