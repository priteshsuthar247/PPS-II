#include<iostream>
using namespace std;
class player
{
    public:
    char name[30];
    int age, runs, test, hr, lr;
    float avg;
    void get_data();
    void display();
    void calc_avg();
};
void player::get_data()
{
    cout <<"Enter Name: ";
    cin >> name;
    cout <<"Enter Age: ";
    cin >> age;
    cout <<"Enter the No of Tests Played: ";
    cin >> test;
    cout <<"Enter the Highest Runs: ";
    cin >> hr;
    cout <<"Enter the Lowest Runs : ";
    cin >> lr;
    cout <<"Enter Total Runs: ";
    cin >> runs;   
}

  void player::display()
  {
    cout <<"Name of The Player: "<<name<<endl;
    cout <<"Age of The Player: "<<age<<endl;
    cout <<"Tests Played by the Player: "<<test<<endl;
    cout <<"The Highest Runs of Player: "<<hr<<endl;
    cout <<"The Lowest Runs of Player: "<<lr<<endl;
    cout <<"Runs Made by the Player: "<<runs<<endl;
    cout <<"Average Runs Made by the Player: "<<avg<<endl;
  }
  void player::calc_avg()
  {
    avg = runs / test;
  }
int main ()
{
  player p1;
  p1.get_data();
  p1.calc_avg();
  p1.display();
  return 0;  
}