#include <iostream>
using namespace std;
void zerosmaller(int &a, int &b)
{
    if (a>b)
    {
        b=0;
    }
    else
    {
        a=0;
    }
}
int main()
{
    int c,d;
    cout<<"C : ";
    cin>>c;
    cout<<"D : ";
    cin>>d;
    zerosmaller(c,d);
    cout<<"C : "<<c<<endl;
    cout<<"D : "<<d<<endl;
    return 0;
}