#include <iostream>
using namespace std;
class waqt
{
    public:
    float h,m,s,th,tm,ts;
    waqt();
    void get_data();
    void display_data();
    void convert();
    void add(waqt t[]);
    ~waqt();
};
waqt::waqt()
{
    (h,m,s,th,tm,ts)=0;
}
void waqt::get_data()
{
    cout<<"Seconds: ";
    cin>>s;
}
void waqt::display_data()
{
    cout<<"Seconds: "<<ts<<endl;
    cout<<"Minutes: "<<tm<<endl;
    cout<<"Hours: "<<th<<endl;
}
void waqt::convert()
{
    m=s/60;
    h=s/(3600);
}
void waqt::add(waqt t[])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = i+1; j < 2; j++)
        {
            th=t[i].h+t[j].h;
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = i+1; j < 2; j++)
        {
            tm=t[i].m+t[j].m;
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = i+1; j < 2; j++)
        {
            ts=t[i].s+t[j].s;
        }
    }
}
waqt::~waqt(){}
int main()
{
    waqt t[2];
    for (int i = 0; i < 2; i++)
    {
        t[i].get_data();
    }
    for (int i = 0; i < 2; i++)
    {
        t[i].convert();
    }
    for (int i = 0; i < 2; i++)
    {
        t[i].add(t);
    }
    t[0].display_data();    
    return 0;
}