#include <iostream>
using namespace std;
class timee
{
    int h,m,s;
    public:
    void get_data();
    void operator==(timee t);
    void operator!=(timee t);    
    void operator>(timee t);    
    void operator<(timee t);
    void display();
};
void timee::get_data()
{
    re:
    cout<<"Hours: ";
    cin>>h;
    cout<<"Minutes: ";
    cin>>m;
    cout<<"Seconds: ";
    cin>>s;
    if (h<=23 && m<=59 && s<=59)
    {}
    else
    {
        cout<<"This is beyond science"<<endl;
        goto re;
    }
}
void timee::operator==(timee t)
{
    if (t.h==h)
    {
        if (t.m==m)
        {
            if (t.s==s)
            {}
        }
        cout<<"Both are equal"<<endl;
    }
}
void timee::operator!=(timee t)
{
    if (t.h!=h)
    {
        if (t.m!=m)
        {
            if (t.s!=s)
            {}
        }
        cout<<"Both are different"<<endl;
    }
}
void timee::operator>(timee t)
{
    if (t.h>h)
    {
        if (t.m>m)
        {
            if (t.s>s)
            {}
        }
        cout<<"Second one is greater"<<endl;
    }
}
void timee::operator<(timee t)
{
    if (t.h<h)
    {
        if (t.m<m)
        {
            if (t.s<s)
            {}
        }
        cout<<"First one is greater"<<endl;
    }
}
void timee ::display()
{
    cout<<h<<":"<<m<<":"<<s<<endl;
}
int main()
{
    timee t1,t2;
    t1.get_data();
    t2.get_data();
    t1.display();
    t2.display();
    t1==t2;
    t1!=t2;
    t1>t2;
    t1<t2;
    return 0;
}