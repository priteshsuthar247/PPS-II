#include <iostream>
using namespace std;
class waqt
{
    public:
    float h,m,s;
    void get_data();
    void display_data();
    void convert();
};
void waqt::get_data()
{
    cout<<"Seconds : ";
    cin>>s;
}
void waqt::display_data()
{
    cout<<"Seconds : "<<s<<endl;
    cout<<"Minutes : "<<m<<endl;
    cout<<"Hours : "<<h<<endl;
}
void waqt::convert()
{
    m=s/60;
    h=s/(3600);
}
int main()
{
    waqt t1;
    t1.get_data();
    t1.convert();
    t1.display_data();
    return 0;
}