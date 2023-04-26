#include <iostream>
using namespace std;
class matrix
{
    public:
    int a[2][2],ad[2][2],sb[2][2],ml[2][2];
    matrix();
    void get_data();
    void operator+=(matrix m[]);
    void operator-=(matrix m[]);
    void operator*=(matrix m[]);
    void display();
    ~matrix();
};
matrix::matrix()
{
    (a[2][2],ad[2][2],sb[2][2],ml[2][2])=0;
}
void matrix::get_data()
{
    cout<<"Matrix: "<<endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>a[i][j];
        }
    }
}
void matrix::operator+=(matrix m[])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            ad[i][j]=m[0].a[i][j]+m[1].a[i][j];
        }
    }
}
void matrix::operator-=(matrix m[])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sb[i][j]=m[0].a[i][j]-m[1].a[i][j];
        }
    }
}
void matrix::operator*=(matrix m[])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            ml[i][j]=0;
            for (int k = 0; k < 2; k++)
            {
                ml[i][j]+=m[0].a[i][k]*m[1].a[k][j];
            }
        }
    }
}
void matrix::display()
{
    cout<<"Addition: "<<endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<"\t"<<ad[i][j];
        }
        cout<<endl;
    }
    cout<<"Subtraction: "<<endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<"\t"<<sb[i][j];
        }
        cout<<endl;
    }
    cout<<"Multiplication: "<<endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<"\t"<<ml[i][j];
        }
        cout<<endl;
    }
}
matrix::~matrix(){}
int main()
{
    matrix m[2];
    for (int i = 0; i < 2; i++)
    {
        m[i].get_data();
    }
    for (int i = 0; i < 2; i++)
    {
        m[i].operator+=(m);
    }
    for (int i = 0; i < 2; i++)
    {
        m[i].operator-=(m);
    }
    for (int i = 0; i < 2; i++)
    {
        m[i].operator*=(m);
    }
    m[0].display();
    return 0;
}