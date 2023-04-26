#include <iostream>
using namespace std;
void repchar(char c='*' , int n=45)
{
    for (int i = 0; i < n; i++)
    {
        cout<<c;
    }
    cout<<endl;
}
int main()
{
    repchar();
    repchar('=');
    repchar('+',30);
    return 0;
}