#include <iostream>
using namespace std;
class date
{
    int dd,mm,yy,days_in_month;
    public:
    date();
    void get_data(date d[]);
    void next(date d[]);
    void display(date d[]);
    ~date();
};
date::date()
{
    (dd,mm,yy,days_in_month)=0;
}
void date::get_data(date d[])
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
void date::next(date d[])
{
    for (int i = 0; i < 5; i++)
    {
    
            switch (d[i].mm) 
            {
                case 2:
                    if (d[i].yy % 4 == 0) 
                    {
                        d[i].days_in_month = 29;
                    } else 
                    {
                        d[i].days_in_month = 28;
                    }
                    break;
                case 4: case 6: case 9: case 11:
                    d[i].days_in_month = 30;
                    break;
                default:
                    d[i].days_in_month = 31;
                    break;
            }
            d[i].dd++;
            if (d[i].dd > d[i].days_in_month)
            {
                d[i].dd = 1;
                d[i].mm++;
                if (d[i].mm > 12)
                {
                    d[i].mm = 1;
                    d[i].yy++;
                }
            }
    }        
}
date::~date(){}
void date::display(date d[])
{
    cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
int main()
{
    date d[5];
    d[0].get_data(d);
    d[0].display(d);
    for (int i = 1; i < 5; i++)
    {
        d[0].next(d);
        d[0].display(d);
    }
    return 0;
}