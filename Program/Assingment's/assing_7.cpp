#include <iostream>
using namespace std;
double pi = 3.1438;

void volume(int L, int B, int H)
{
    int vol=L*B*H;
    cout<<"The volume of cuboid is: "<<vol<<endl;
}
void volume(int r, int h)
{
    float vol;
    vol = pi * r * r * (h / 3.0);
    cout<<"The volume of cone is: "<<vol<<endl;
}
void volume(int r)
{
    float vol= pi * r * r * r* 4/3;
    cout<<"The volume of sphere: "<<vol<<endl;
}
void findHCF(int a, int b) {
    // Euclidean algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout<<"HCF is: "<<a;
}
int main()
{
    cout<<"\nProgram of finding volume\n";
    findHCF(30,20);
    cout<<endl;
}