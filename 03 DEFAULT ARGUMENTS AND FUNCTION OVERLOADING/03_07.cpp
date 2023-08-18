#include <iostream>
#include <iomanip>
using namespace std;
void f1(char c,int i=0)
{
    i=c;
    cout<<"1. "<<i<<endl;
}
void f1(char c,float f=0.0)
{
    f=c;
    // cout<<"2. "<<setprecision(4)<<f<<endl;
    // C syntax is used here because in c++ if there are 0's after decimal point. They are not being displayed.
    printf("2. %.2f",f);
}
int main()
{
    float f=0;
    int i=0;
    char c;
    cout<<"Enter: ";
    cin>>c;
    f1(c,i);
    f1(c,f);
    return 0;
}