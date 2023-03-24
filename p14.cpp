#include<iostream>
using namespace std;
class player
{
    char name[30],tname[20];
    int i,avg[2],temp=0;
    public:
    void get_data();
    void display();
    void sorting();
};
void player::get_data()
{
    cout <<"Enter Name : ";
    cin >> name;
    cout<<"Average : ";
    cin>>avg;
}

  void player::display()
  {
    cout <<"Name Of The Player : "<<name<<endl;
    cout <<"Average Runs Made By The Player : "<<avg<<endl;
  }
  void player::sorting()
  {
    for (int i = 0; i < 2; i++)
    {
        for (int j = i+1; j < 2; j++)
        {
            temp=avg[i];
            avg[i]=avg[j];
            avg[j]=avg[i];
        }
        
    }
    
  }
int main ()
{
  player p1[2];
  for (int i = 0; i < 2; i++)
  {
    p1[i].get_data();
  }
  for (int i = 0; i < 2; i++)
  {
    p1[i].display();
  }
  for (int i = 0; i < 2; i++)
  {
    p1[i].sorting();
  }
  
  return 0; 
}