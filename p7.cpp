#include <iostream>

using namespace std;
void f1(char a ,int b=0)
{
    b=a;
    cout<<b<<endl;
}
void f1(char e[20], float c=0)
{

}
int main()
{
    char b='a';
    int c=0;
    float d=0.0f;
    f1(b);
    d=b;
    cout<<d;
    return 0;
}