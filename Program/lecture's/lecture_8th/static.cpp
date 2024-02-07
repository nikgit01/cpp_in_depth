#include <iostream>
using namespace std;
class Item
{
public:
    int a, b;       // instence member variables.
    static int k;   // static member variable.
        static int old()
        {
            return pvt;
        }
        static int st(int x)
        {
            pvt=x;
            return pvt;
        }
private:
    static int pvt;
};
int Item::k;
int Item::pvt=10;
int main()
{
    // Item i1, i2;    
    // cout << endl << i1.a << " " ; 
    // Item::k=5;
    cout <<Item::k <<" ";
    cout << endl;
    cout<<"old value: "<<Item::old()<<endl;
    cout << Item::st(20)<<endl;
}