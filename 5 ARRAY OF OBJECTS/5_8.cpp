#include <iostream>
using namespace std;
class dist
{
    int ft;
    float in;
    int tf,ti;
    public:
    dist();
    void get_data();
    void add(dist d[]);
    void display(dist d[]);
    ~dist();
};
dist::dist()
{
    (ft,in,tf,ti)=0;
}
void dist::get_data()
{
    cout<<"Feet: ";
    cin>>ft;
    cout<<"Inches: ";
    cin>>in;
}
void dist::add(dist d[])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = i+1; j < 2; j++)
        {
            tf=d[i].ft+d[j].ft;
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = i+1; j < 2; j++)
        {
            ti=d[i].in+d[j].in;
        }
    }
}
void dist::display(dist d[])
{
    for (int i = 0; i < 2; i++)
    {
        cout<<i+1<<": "<<d[i].ft<<"ft "<<d[i].in<<"in"<<endl;
    }
    do
    {
    if(ti>=12)
    {
        ti=ti-12;
        tf++;
    }
    }while(ti>12);
    cout<<"Addition: "<<tf<<"ft "<<ti<<"in";
}
dist::~dist(){}
int main()
{
    dist d[2];
    for (int i = 0; i < 2; i++)
    {
        d[i].get_data();
    }
    for (int i = 0; i < 2; i++)
    {
        d[i].add(d);
    }
    d[0].display(d);
    return 0;
}