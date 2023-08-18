#include <iostream>
#include <cstring>
using namespace std;
class str
{
    public:
    char sr[20];
    void get_data();
    void add(str sr[]);
    void display();
};
void str::get_data()
{
    cout<<"Enter: ";
    cin>>sr;
}
void str::add(str sr[])
{
    for (int i = 0; i < 1; i++)
    {
            strcat(sr[i].sr,sr[i+1].sr);
    }
}
void str::display()
{
    cout<<sr;
}
int main()
{
    str s[2];
    for (int i = 0; i < 2; i++)
    {
        s[i].get_data();
    }
    for (int i = 0; i < 1; i++)
    {
        s[i].add(s);
    }
    s[0].display();
    return 0;
}
