#include <iostream>
using namespace std;
class book
{
    public:
    char bookname[20];
    char authorname[20];
    int qty;
    int pr;
    book();
    void get_data();
    void display_data();
    int price();
    void sort(book b[]);
    ~book();
};
book::book()
{
    qty=0;
    pr=0;
    bookname[0]='\0';
    authorname[0]='\0';
}
void book::get_data()
{
    cout<<"Book Name : ";
    cin>>bookname;
    cout<<"Author Name : ";
    cin>>authorname;
    cout<<"Quantity : ";
    cin>>qty;
    cout<<"Price: ";
    cin>>pr;
}
void book::display_data()
{
    cout<<"Book Name : "<<bookname<<endl;
    cout<<"Author Name : "<<authorname<<endl;
    cout<<"Quantity : "<<qty<<endl;
    cout<<"Price : "<<price()<<endl;
}
int book::price()
{
    return pr*qty;
}
void book::sort(book b[])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j  = 0; j < 10; j++)
        {
            if (b[i].pr < b[j].pr)
            {
                book temp;
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
}
book::~book(){}
int main()
{
    book b[10];
    for (int i = 0; i < 10; i++)
    {
        b[i].get_data();
        
    }
    for (int i = 0; i < 10; i++)
    {
        b[i].price();
    }
    for (int i = 0; i < 10; i++)
    {
        b[i].sort(b);
    }
    for (int i = 0; i < 10; i++)
    {
        b[i].display_data();
    }
    
    return 0;
}