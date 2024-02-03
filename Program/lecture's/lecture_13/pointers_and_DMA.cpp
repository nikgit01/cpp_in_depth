#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    complex() {}
    complex(int x)
    {
        a = x;
        b = 0;
    }
    complex(int a, int b) : a(a), b(b)
    {
    }
    complex(complex &C)
    {
        a = C.a;
        b = C.b;
    }

    void set_data(int a, int b) 
    {
        this->a = a;          // This pointer (this->)  to resolve name conflict //...........................................
        this->b = b;
    }
    void show_data()
    {
        cout << "a= " << a << " b= " << b << endl;
    }
    complex sumGreater(complex C){  
        if((a+b)>(C.a+C.b))
            return *this;   // use of This pointer (this->)  
        else
            return C;
    }

    // complex operator+(complex C)               // Operator+ as a memmber
    // {
    //     complex temp(0,0);
    //     temp.a=a+C.a;
    //     temp.b=b+C.b;
    //     return temp;
    // }
    friend complex operator+(complex, complex); // Declare Friend Opreator
    friend complex operator-(complex);
    // complex operator-()                        // Opreator- as a member
    // {
    //     complex temp;
    //     temp.a=-a;
    //     temp.b=-b;
    //     return temp;
    // }
    friend ostream& operator<<(ostream&, complex); 
    friend istream& operator>>(istream&, complex&)
};
ostream& operator<<(ostream &dout,complex C) 
{
    dout<<"\na="<<C.a<<"b="<<C.b;
    return dout;
}
istream& operator>>(istream& din, complex &C) 
{
    din>>C.a>>C.b;   
}
 
complex operator+(complex X, complex Y) 
{
    complex temp(0, 0);
    temp.a = X.a + Y.a;
    temp.b = X.b + Y.b;
    return temp;
}
complex operator-(complex X)
{
    complex temp; 
    temp.a = -X.a;
    temp.b = -X.b;
    return temp;
}

int main()
{
    complex c1(3, 4), c2(5, 6), c3;

    cout << endl;
    c3 = c1 + c2; // c3=operator+(.c1, c2);
    c3.show_data();
    c3 = -c1; // c3=operator-(c2);

    return 0;
}