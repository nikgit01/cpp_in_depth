#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    void set_data(int x, int y)
    {
        a = x;
        b = y;
    }
    void show_data();
};
void complex::show_data()
{
    cout << "a= " << a << " b= " << b << endl;
}
int main()
{
    complex c1;
    c1.set_data(2, 5);
    c1.show_data();
    return 0;
}