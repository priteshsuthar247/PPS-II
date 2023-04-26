#include <iostream>
using namespace std;
class complex
{
    int real, img,ar,ai,sr,si,mr,mi;
    public:
    complex();
    void get_data();
    void operator +(complex c[]);
    void operator -(complex c[]);
    void operator *(complex c[]);
    void display();
    ~complex();
};
complex::complex()
{
    (real, img,ar,ai,sr,si,mr,mi)=0;
}
void complex::get_data()
{
    cout<<"Real: ";
    cin>>real;
    cout<<"Imaginary: ";
    cin>>img;
}
void complex::operator +(complex c[])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = i+1; j < 2; j++)
        {
            ar=c[i].real+c[j].real;
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = i+1; j < 2; j++)
        {
            ai=c[i].img+c[j].img;
        }
    }
}
void complex::operator -(complex c[])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = i+1; j < 2; j++)
        {
            sr=c[i].real-c[j].real;
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = i+1; j < 2; j++)
        {
            si=c[i].img-c[j].img;
        }
    }
}
void complex::operator *(complex c[])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = i+1; j < 2; j++)
        {
            mr=c[i].real*c[j].real;
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = i+1; j < 2; j++)
        {
            mi=c[i].img*c[j].img;
        }
    }
}
complex::~complex(){}
void complex::display()
{
    cout<<"Addition: "<<ar<<" + "<<ai<<"i"<<endl;
    cout<<"Subtraction: "<<sr<<" + "<<si<<"i"<<endl;
    cout<<"Multiplication: "<<mr<<" + "<<mi<<"i"<<endl;
}
int main()
{
    complex c[2];
    for (int i = 0; i < 2; i++)
    {
        c[i].get_data();
    }
    for (int i = 0; i < 2; i++)
    {
        c[i].operator+(c);
    }
    for (int i = 0; i < 2; i++)
    {
        c[i].operator-(c);
    }
    for (int i = 0; i < 2; i++)
    {
        c[i].operator*(c);
    }
    cout<<endl;
        c[0].display();
    return 0;
}