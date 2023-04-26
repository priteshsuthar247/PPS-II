#include <iostream>
using namespace std;
double power(double m,int n=2)
{
    double a=1;
    for (int i = 1; i <=n; i++)
    {
        a=a*m;
    }
    return a;
}
int main()
{
    double b,ans;
    int c;
    cout<<"Number : ";
    cin>>b;
    cout<<"Exponent : ";
    cin>>c;
    ans=power(b,c);
    cout<<"Answer : "<<ans<<endl;
    ans=power(b);
    cout<<"Answer (with default parameters) : "<<ans<<endl;
    return 0;
}