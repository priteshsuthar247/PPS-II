#include<iostream>
#include<cstring>
using namespace std;
class stringg
{
    char str[20];
    public:
    void get_data();
    void operator ==(stringg a);
    void operator==(stringg a);
    void operator !=(stringg a);
    void operator >(stringg a);
    void operator <(stringg a);
    void display();
};
void stringg::get_data()
{
    cout<<"Enter: ";
    cin>>str;
}
void stringg::operator==(stringg a)
{
    if(strcmp(a.str,str)==0)
    {
        cout<<"Strings are equal";
    }
}
void stringg::operator !=(stringg a)
{
    if(strcmp(a.str,str)!=0) 
    {
        cout<<"Strings are different"<<endl;
    }
}
void stringg::operator >(stringg a)
{
    if(strcmp(a.str,str)>0)
    {
        cout<<"First string is greater"<<endl;
    }
    }
void stringg::operator <(stringg a)
{
    if(strcmp(a.str,str)<0)
    {
        cout<<"Second string is greater"<<endl;
    }
}
void stringg::display()
{
    cout<<"String: "<<str<<endl;
}
int main()
{
    stringg s1,s2;
    s1.get_data();
    s2.get_data();
    s1.display();
    s2.display();
    s2==s1;
    s2!=s1;
    s2>s1;
    s2<s1;
    return 0;
}
