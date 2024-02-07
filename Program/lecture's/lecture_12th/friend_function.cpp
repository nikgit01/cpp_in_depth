     // checking in meerut after comming from home
#include <iostream>
using namespace std;
class Item
{
    private:
        int a,b;
    public:
        void setData(int x, int y) {a=x; b=y;}
        void showData() { cout<<"\na="<<a<<" b="<<b<<endl; }
        friend void f1(Item);   // friend function 
};

void f1(Item i)   // function defination with aruguments
{
    cout<<i.a+i.b<<endl; 
}
int main()
{
    Item i1;
    i1.setData(10,20);
    i1.showData();
    f1(i1);       // calling friend function giving arguments
    return 0;
} 