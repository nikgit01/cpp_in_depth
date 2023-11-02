#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;
public:
    complex() {}    // Constructors 
    complex(int x) {a=x; b=0;}
    complex(int a, int b): a(a),b(b)  // Initializer list or Initializer
    {}
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
    void show_data()
    {
        cout << "a= " << a << " b= " << b << endl;
    }
    complex operator+(complex C)
    {
        complex temp(0,0);
        temp.a=a+C.a;
        temp.b=b+C.b;
        return temp;
    }
}; 
int main()
{
    complex c1(3,4), c2(5,6), c3;

    cout<<endl;
    c3=c1+c2;    //c3=c1.operator+(c2);
    c3.show_data();
    // c3=c1.operator+(c2);
    // c3.show_data();
    return 0;
}
