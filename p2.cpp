#include <iostream>
using namespace std;
void add()
{
    int a[2][2],b[2][2],add[2][2],i,j;
    cout<<"Matrix A : "<<endl;
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Matrix B : "<<endl;
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            cin>>b[i][j];
        }
        
    }
    cout<<"Addition of A & B : "<<endl;
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            add[i][j]=a[i][j]+b[i][j];
        } 
    }
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            cout<<"\t"<<add[i][j];
        }
        cout<<endl;
    }
}
int main()
{
    add();
    return 0;
}