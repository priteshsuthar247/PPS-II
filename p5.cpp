#include <iostream>
using namespace std;
void f1(char a)
{
    for (int i = 0; i < 5; i++)
    {
        cout<<a<<" ";
    }
}
void f1(char b[20])
{
    for (int i = 0; i < 5; i++)
    {
        cout<<b<<" ";
    }
}
int main()
{
    char c,d[20];
    cout<<"Character : ";
    cin>>c;
    cout<<"String : ";
    cin>>d;
    f1(c);
    cout<<endl;
    f1(d);
    return 0;
}