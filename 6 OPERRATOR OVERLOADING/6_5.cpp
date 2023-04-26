#include <iostream>
using namespace std;
class dist
{
    int ft;
    float in;
    public:
    dist();
    void get_data();
    void operator ==(dist d);
    void operator !=(dist d);
    void operator >(dist d);
    void operator <(dist d);
    void display();
    ~dist();
};
dist::dist()
{
    (ft,in)=0;
}
void dist::get_data()
{
    cout<<"Feet: ";
    cin>>ft;
    cout<<"Inches: ";
    cin>>in;
}
void dist::operator==(dist d)
{
    if ((d.ft&&d.in)==ft&&in)
    {
        cout<<"Both are equal"<<endl;
    }
}
void dist::operator!=(dist d)
{
    if ((d.ft&&d.in)!=ft&&in)
    {
        cout<<"Both are different"<<endl;
    }
}
void dist::operator>(dist d)
{
    if ((d.ft&&d.in)>ft&&in)
    {
        cout<<"First one is greater";
    }
}
void dist::operator<(dist d)
{
    if ((d.ft&&d.in)<ft&&in)
    {
        cout<<"Second one is greater";
    }
}
void dist::display()
{
    do
    {
    if(in>=12)
    {
        in=in-12;
        ft++;
    }
    }while(in>12);
    cout<<ft<<"ft "<<in<<"in"<<endl;
}
dist::~dist(){}
int main()
{
    dist d1,d2;
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