     // checking in meerut after comming from home
#include <iostream>
using namespace std;
class Item
{
    private:
        int a,b;
    public:
        void setData(int x, int y) {a=x; b=y;}
        void showData() { cout<<"\na="<<a<<" b="<<b; }
        friend void f1(Item);
};

void f1(Item i)
{
    cout<<i.a+i.b; 
}
int main()
{
    Item i1;
    i1.setData(10,20);
    f1(i1);
    return 0;
} 