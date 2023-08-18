#include <iostream>
using namespace std;
class date
{
    int dd,mm,yy,days_in_month;
    public:
    date();
    void get_data();
    void operator ++();
    void display();
    ~date();
};
date::date()
{
    (dd,mm,yy,days_in_month)=0;
}
void date::get_data()
{
    re:
    cout<<"Date: ";
    cin>>dd;
    cout<<"Month: ";
    cin>>mm;
    cout<<"Year: ";
    cin>>yy;
    if (dd<=31 && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12) && yy>=1000 && yy<=3000)
    {}
    else if (dd<=30 && (mm==4 || mm==6 || mm==9 || mm==11) && yy>=1000 && yy<=3000)
    {}
    else if (dd<=29 && mm==2 && yy>=1000 && yy<=3000 && yy%4==0)
    {}
    else
    {
        cout<<"This is beyond science"<<endl;
        goto re;
    }    
}
void date::operator ++()
{    
            switch (mm) 
            {
                case 2:
                    if (yy % 4 == 0) 
                    {
                        days_in_month = 29;
                    } else 
                    {
                        days_in_month = 28;
                    }
                    break;
                case 4: case 6: case 9: case 11:
                    days_in_month = 30;
                    break;
                default:
                    days_in_month = 31;
                    break;
            }
            dd++;
            if (dd > days_in_month)
            {
                dd = 1;
                mm++;
                if (mm > 12)
                {
                    mm = 1;
                    yy++;
                }
            }       
}
date::~date(){}
void date::display()
{
    cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
int main()
{
    date d;
    d.get_data();
    d.display();
    for (int i = 0; i < 5; i++)
    {
        ++d;
        d.display();
    }
    return 0;
}