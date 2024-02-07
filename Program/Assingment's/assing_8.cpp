#include <iostream>
using namespace std;
class Time
{
    private:
        int hr, min, sec;
    public:
        void setTime(int x, int y, int z)
        {
            hr=x;
            min=y;
            sec=z;
        }
        void showtime()
        {
            cout<<"\nTime is: "<<hr<<":"<<min<<":"<<sec<<endl;
        }
};
class Date
{
    private:
        int date,month,year;
    public:
        void setDate(int x, int y, int z)
        {
            date=x;
            month=y;
            year=z;
        }
        const char *getMonthName()
        {
            switch(month){
                case 1:
                    return "jan";
                case 2:
                    return "feb";
                case 3:
                    return "Mar";
                case 4:
                    return "Apr";
                case 5:
                    return "May";
                case 6:
                    return "jun";
                case 7:
                    return "jul";
                case 8:
                    return "Aug";
                case 9:
                    return "Sep";
                case 10:
                    return "Oct";
                case 11:
                    return "Nov";
                case 12:
                    return "Dec";
                default:
                    return "invalid month";
            }
        }
        void showDate(int formate=1)
        {

            if ((date < 1 || date > 31) || (month < 1 || month > 12))
                cout << "Invalid date";
            if(formate==1)
                cout<<"D="<<date<<" M="<<month<<" Y="<<year<<endl;
            else if(formate==2)
                cout<<"/"<<date<<"/"<<month<<"/"<<year<<endl;
            else if(formate==3)
                cout<<"Date is: "<<date<<"-"<<getMonthName()<<"-"<<year<<endl;

        }
};
int main()
{
    Time t1;
    t1.setTime(12,34,15);
    t1.showtime();
    Date d1;
    d1.setDate(31,12,2020);
    d1.showDate(3);
    return 0;
}