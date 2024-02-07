#include <iostream>
using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;
    void inputbook()
    {

        cout << "Enter the bookid: ";
        cin >> bookid;
        cout << "Enter the title: ";
        cin.ignore();
        cin.getline(title, 20);
        cout << "Enter the price: ";
        cin >> price;
    }
    void displaybook()
{
    cout << endl;
    cout << "BOOK ID: " << bookid << endl;
    cout << "BOOK TITLE: " << title << endl;
    cout << "BOOK PRICE: ₹" << price << endl;
}
};
int main()
{
    book b1 = {1, "java", 400.0f}, b2;
    b2.inputbook();
    b2.displaybook();
}