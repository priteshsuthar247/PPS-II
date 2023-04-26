#include <iostream>
using namespace std;
void f1(int a)
{
    for (int i = 0; i <=5; i++)
    {
        cout<<a<<" ";
    }
}
void f1(float b)
{
    for (int i = 0; i <=5; i++)
    {
        cout<<b<<" ";
    }
}
void f1(char c)
{
    for (int i = 0; i <=5; i++)
    {
        cout<<c<<" ";
    }
}
int main()
{
    int d;
    float e;
    char f;
    cout<<"Integer : ";
    cin>>d;
    cout<<"Float : ";
    cin>>e ;
    cout<<"Character : ";
    cin>>f;
    f1(d);
    cout<<endl;
    f1(e);
    cout<<endl;
    f1(f);
    cout<<endl;
    return 0;
}