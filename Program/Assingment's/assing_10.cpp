#include <iostream>
#include <string.h>
using namespace std;
class Cuboide
{
    private:
        int length,bregth,hieght;
    public:
        Cuboide()
        {
            length=0;
            bregth=0;
            hieght=0;
        }
};
class Customer
{
    private:
        int cust_id;
        char name[20];
        char email[40];
        char mob[13];
    public:
        Customer()
        {
            cust_id = 0;
            strcpy(name,"Anonimus");
            strcpy(email,"xyz@gmail.com");
            strcpy(mob,"+910000000");

        }
        Customer(int id, char n[], char e[], char m[])
        {
            cust_id = id;
            strcpy(name,n);
            strcpy(email,e);
            strcpy(mob,m);

        }
};
class Time
{
    private:
        int hr,min,sec;
    public:
        Time()
        {
            hr=0;
            min=0;
            sec=0;
        }
};
class Book
{
    private:
        int bookid;
        char title[50];
        int price;
    public:
        Book()
        {
            bookid=0;
            strcpy(title,"non");
            price=0;
        }
        Book(int id, char t[], int p)
        {
            bookid = id;
            strcpy(title,t);
            price = p;
        }
        
};
class complex
{
    private:
        int a,b;
    public:
        complex(int x,int y)
        {
            a=x;
            b=y;
        }
        void showData()
        {
            cout<<endl<<"a= "<<a<<"b= "<<b<<endl;
        }
};
int main()
{
    complex c[5]={complex(1,2),complex(3,4),complex(5,5),complex(9,8),complex(7,5)};
    for(int i=0;i<5;i++)
        c[i].showData();
    cout<<endl;
    return 0;    
}