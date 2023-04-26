#include <iostream>
using namespace std;
class player
{
   public:
   string pname,tname;
   int avg;
   player();
   void get_data();
   void sort(player p[]);
   void display();
   ~player();
};
player::player()
{
   pname={0};
   tname={0};
   avg=0;
}
void player::get_data()
{
   cout<<"Team Name: ";
   cin>>tname;
   cout<<"Player Name: ";
   cin>>pname;
   cout<<"Average: ";
   cin>>avg;
   cout<<endl;
}
void player::sort(player p[])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j  = 0; j < 10 ; j++)
        {
            if (p[i].avg < p[j].avg)
            {
                player temp;
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
}
void player::display()
{
   cout<<"Team Name: "<<tname<<endl;
   cout<<"Player Name: "<<pname<<endl;
   cout<<"Average: "<<avg<<endl;
}
player::~player(){}
int main()
{
   player p[10];
   for ( int i = 0; i < 10; i++)
   {
      p[i].get_data();
   }
   for (int i = 0; i < 10; i++)
   {
       p[i].sort(p);
   }
   for (int i = 0; i < 10; i++)
   {
       p[i].display();
   }
   return 0;
}