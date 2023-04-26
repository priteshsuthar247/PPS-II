#include <iostream>
#include <cstring>
using namespace std;
class student
{
    public:
    int rn,per,marks[6];
    char name[20],gr[20];
    student();
    void get_data();
    void percentage();
    void grade();
    void sort(student s[]);
    void display();
    ~student();
};
student::student()
{
    rn=0;
    per=0;
    marks[6]=0;
    name[0]='\0';
    gr[0]='\0';
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
void student::grade()
{
    if (per<=100 && per>=80)
    {
        strcpy(gr,"Distinction");
    }
    else if (per<=79 && per>=60)
    {
        strcpy(gr,"First Class");
    }
    else if (per<=59 && per>=40)
    {
        strcpy(gr,"Second Class");
    }
    else 
    {
        strcpy(gr,"Fail");
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
    cout<<"Class: "<<gr<<endl;
}
void student::sort(student s[])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (s[i].per < s[j].per)
            {
                student temp;
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
}
student::~student(){}
int main()
{
    student s[2];
    for (int i = 0; i < 2; i++)
    {
        s[i].get_data();
    }
    for (int i = 0; i < 2; i++)
    {
        s[i].percentage();
    }
    for (int i = 0; i < 2; i++)
    {
        s[i].grade();
    }
    for (int i = 0; i < 2; i++)
    {
        s[i].sort(s);
    }
    for (int i = 0; i < 2; i++)
    {
        s[i].display();
    }
    return 0;
}