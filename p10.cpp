#include <iostream>
using namespace std;
class book
{
    public:
    char bookname[50];
    char authorname[50];
    int rate;
    int qty;
    int pr;
    void get_data();
    void display_data();
    void price();
};
void book::get_data()
{
    cout<<"Book Name : ";
    cin>>bookname;
    cout<<"Author Name : ";
    cin>>authorname;
    cout<<"Rate : ";
    cin>>rate;
    cout<<"Quantity";
    cin>>qty;
}
void book::display_data()
{
    cout<<"Book Name : "<<bookname<<endl;
    cout<<"Author Name"<<authorname<<endl;
    cout<<"Rate : "<<rate<<endl;
    cout<<"Quantity"<<qty<<endl;
    cout<<"Price : "<<pr<<endl;
}
void book::price()
{
    pr=rate*qty;
}
int main()
{
    book b1;
    b1.get_data();
    b1.price();
    b1.display_data();
    return 0;
}