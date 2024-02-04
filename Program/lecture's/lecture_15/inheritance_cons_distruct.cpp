#include<iostream>
#include <string.h>
using namespace std;
class Person
{
    private:
        char name[20];
        int age;
    protected:
        void setName(char n[])
        {
            strcpy(name,n);

        }
        void setAge(int a)
        {
            age=a;
        }
    public:
        char* getName()
        {
            return name;
        }
        int getAge()
        {
            return age;
        }
};
class Employee:public Person
{
    private:
        float salary;
    protected:
        void setSalary(float s)
        {
            salary=s;
        }
    public:
        float getSalary()
        {
            return salary;
        }
};
// Version 1
void setEmployee(Employee &e, char n[], int a, float s)
{
    // Not possible  because User 1 can acces only public members
}; 
// Version 2
class UpdatedEmployee:public Employee
{
    public:
        void setEmployee(char n[], int a, float s)
        {
            setName(n);
            setAge(a);
            setSalary(s);
        }
        void showEmployee()
        {
            cout<<getName()<<"  "<<getAge()<<"  "<<getSalary();
        }
};
int main()
{
    UpdatedEmployee emp;
    emp.setEmployee("amit",29,40000);
    emp.showEmployee();
    cout<<endl;
    return 0;    
}