#include <iostream>
using namespace std;
class date
{
    int dd,mm,yy;
    public:
    date();
    void get_data();
    void operator ==(date d);
    void operator !=(date d);
    void operator >(date d);
    void operator <(date d);
    void display();
    ~date();
};
date::date()
{
    (dd,mm,yy)=0;
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
void date::operator==(date d)
{
    if (d.dd==dd)
    {
        if (d.mm==mm)
        {
            if (d.yy==yy)
            {}
        }
        cout<<"Both are equal"<<endl;
    }
}
void date::operator!=(date d)
{
    if (d.dd!=dd)
    {
        if (d.mm!=mm)
        {
            if (d.yy!=yy)
            {}
        }
        cout<<"Both are different"<<endl;
    }
}
void date::operator>(date d)
{
    if (d.dd>dd)
    {
        if (d.mm>mm)
        {
            if (d.yy>yy)
            {}
        }
        cout<<"Second one is greater"<<endl;
    }
}
void date::operator<(date d)
{
    if (d.dd<dd)
    {
        if (d.mm<mm)
        {
            if (d.yy<yy)
            {}
        }
        cout<<"First one is greater"<<endl;
    }
}
date::~date(){}
void date::display()
{
    cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
int main()
{
    date d1,d2;
    d1.get_data();
    d2.get_data();
    d1.display();
    d2.display();
    d1==d2;
    d1!=d2;
    d1>d2;
    d1<d2;
    return 0;
}