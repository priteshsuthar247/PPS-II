#include <iostream>
using namespace std;
class student
{
    public:
    int rollno,marks[6],i;
    float per=0;
    char name[20];
    void get_data();
    void calc_percentage();
    void display();
};
void student::get_data()
{
    cout<<"Name: ";
    cin>>name;
    cout<<"Roll No: ";
    cin>>rollno;
    for (i = 0; i < 6; i++)
    {
        cout<<"Subject "<<i+1<<": ";
        cin>>marks[i];
    }
}
void student::calc_percentage()
{
    for ( i = 0; i < 6; i++)
    {
        per=per+marks[i];
    }
    per=per/6;
}
void student::display()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No: "<<rollno<<endl;
    for ( i = 0; i < 6; i++)
    {
        cout<<"Subject "<<i+1<<": "<<marks[i]<<endl;
    }
    cout<<"Percentage: "<<per<<"%"<<endl;
    if (per<=100 && per>=80)
    {
        cout<<"Distinction"<<endl;
    }
    else if (per<=79 && per>=60)
    {
        cout<<"First Class"<<endl;
    }
    else if (per<=59 && per>=40)
    {
        cout<<"Second Class"<<endl;
    }
    else 
    {
        cout<<"Fail";
    }
}
int main()
{
    student s1;
    s1.get_data();
    s1.calc_percentage();
    s1.display();
    return 0;
}