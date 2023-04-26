#include <iostream>
using namespace std;
class student
{
    public:
    int rn,per,marks[6];
    char name[20];
    student();
    void get_data();
    void percentage();
    void operator>(student s);
    void operator<(student s);
    void display();
    ~student();
};
student::student()
{
    rn=0;
    per=0;
    name[0]='\0';
}
void student::get_data()
{
    cout<<"Name: ";
    cin>>name;
    cout<<"Roll No: ";
    cin>>rn;
    for (int i = 0; i < 6; i++)
    {
        cout<<"Marks "<<i+1<<": ";
        cin>>marks[i];
    }
}
void student::percentage()
{
    for (int i = 0; i < 6; i++)
    {
        per=per+marks[i];
    }
    per=per/6;
}
void student::operator<(student s)
{
    if (s.per<per)
    {
        cout<<"First one scored high";
    }
}
void student::operator>(student s)
{
    if (s.per>per)
    {
        cout<<"Second one scored high";
    }
}
void student::display()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No: "<<rn<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<"Marks "<<i+1<<": "<<marks[i]<<endl;
    }
    cout<<"Percentage: "<<per<<"%"<<endl;
}
student::~student(){}
int main()
{
    student s1,s2;
    s1.get_data();
    s2.get_data();
    s1.percentage();
    s2.percentage();
    s1.display();
    s2.display();
    s1>s2;
    s1<s2;
    return 0;
}