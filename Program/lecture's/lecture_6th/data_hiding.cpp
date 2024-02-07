#include <iostream>
using namespace std;
class book
{
    private:
        int bookid;
        char title[20];
        float price;
    public:
        void inputbook()
    {

        cout << "Enter the bookid: ";
        cin >> bookid;
        if(bookid>0)
            bookid=-bookid;
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
    book b1, b2;
    b2.inputbook();
    b2.displaybook();
}