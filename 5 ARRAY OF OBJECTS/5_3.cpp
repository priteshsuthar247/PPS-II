#include <iostream>
#include <cstring>
using namespace std;
class catalogue
{
    public:
    char title[20],author[20],s[20];
    int year,qty,flag;
    catalogue();
    void get_data();
    void search(catalogue c[],char s[]);
    void display();
    ~catalogue();
};
catalogue::catalogue()
{
    title[0]='\0';
    author[0]='\0';
    s[0]='\0';
    year=0;
    qty=0;
    flag=0;
}
void catalogue::get_data()
{
    cout<<"Title: ";
    cin>>title;
    cout<<"Author: ";
    cin>>author;
    cout<<"Year: ";
    cin>>year;
    cout<<"No. of copies: ";
    cin>>qty;
}
void catalogue::display()
{
    cout<<"Title: "<<title<<endl;
    cout<<"Author: "<<author<<endl;
    cout<<"Year: "<<year<<endl;
    cout<<"No. of copies: "<<qty<<endl;
}
void catalogue::search(catalogue c[],char s[])
{
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(c[i].title,s)==0)
        {
            flag=1;
            c[i].display();
        }
    }
    if(flag==0)
        {
            cout<<"Catalogue isn't available";
        }
}
catalogue::~catalogue(){}
int main()
{
    catalogue c[15];
    char s[20];
    for (int i = 0; i < 2; i++)
    {
        c[i].get_data();
    }
    cout<<"Search: ";
    cin>>s;
    c[0].search(c,s);
    return 0;
}
// #include<stdio.h>
// #include<iostream>
// #include<string.h>
// using namespace std;
// class cat
// {
// char title[20]; char auth[20]; int year,copi; public:
// cat()
// {
// strcpy(title,"Catalog 1"); strcpy(auth,"XYZ"); year = 1900;
// copi = 0;
// }
// void getdata()
// {
// cout<<endl<<"Enter the catalog title : "; gets(title);
// cout<<"Enter the Author : "; gets(auth);
 
// cout<<"Enter the Year of Publication : "; cin>>year;
// cout<<"Enter the Total copies : "; cin>>copi;
// }
// void disp()
// {
// cout<<endl<<endl<<"Title : "<<title; cout<<endl<<"Author : "<<auth; cout<<endl<<"Year of Publication : "<<year; cout<<endl<<"Total copies : "<<copi;
// }
// void search(char t[],int n)
// {
// int flag = 0;
// for(int i = 0; i < n; i++)
// {
// if(strcmp(p[i].title,t)==0)
// {
// cout<<"Catalog Found! "; flag = 1;
// p[i].disp();
// }
// }
// if(flag == 0)
// {
 


// }
// }p[5];
 
// cout<<"Error 404: Record not found! ";
// }
 

// int main()
// {

//  int n;
// char srch[20];
// cout<<"Enter no. of catalogs : "; cin>>n;
// for(int i = 0; i < n; i++)
// {
// p[i].getdata();
// }

// cout<<"Enter the title you want to search : "; gets(srch);
// p[0].search(srch, n);
 
//  return 0;
// }
