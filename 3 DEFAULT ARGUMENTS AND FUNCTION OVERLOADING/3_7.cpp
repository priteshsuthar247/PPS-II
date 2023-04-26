#include <iostream>
using namespace std;
void f1(char c,int i=0)
{
    i=c;
    cout<<"1. "<<i<<endl;
}
void f1(char c,float f=0.0)
{
    f=c;
    cout<<"2. "<<f<<endl;
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