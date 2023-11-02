#include<iostream>
using namespace std;
struct book 
{
    int bookid;
    char title[20];
    float price;
};
struct book inputbook()
{
    struct book b;
    cout<<"Enter the bookid: ";
    cin>>b.bookid;
    cout<<"Enter the title: ";
    cin.ignore();
    cin.getline(b.title,20);
    cout<<"Enter the price: ";
    cin>>b.price;
    return b;
}
void displaybook(struct book b)
{
    cout<<endl;
    cout<<"BOOK ID: "<<b.bookid<<endl;
    cout<<"BOOK TITLE: "<<b.title<<endl;
    cout<<"BOOK PRICE: ₹"<<b.price<<endl;

}
int main()
{
    struct book b1={1,"java",400.0f},b2;
    b2 = inputbook();
    displaybook(b2);
}