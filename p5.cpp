#include <iostream>
using namespace std;
class tame
{
    public:
    float h,m,s;
    void get_data();
    void display_data();
    void convert();
};
void tame::get_data()
{
    cout<<"Seconds : ";
    cin>>s;
}
void tame::display_data()
{
    cout<<"Seconds : "<<s<<endl;
    cout<<"Minutes : "<<m<<endl;
    cout<<"Hours : "<<h<<endl;
}
void tame::convert()
{
    m=s/60;
    h=s/(3600);
}
int main()
{
    tame t1;
    t1.get_data();
    t1.convert();
    t1.display_data();
    return 0;
}
