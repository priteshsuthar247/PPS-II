#include <iostream>
using namespace std;
class item
{
    public:
        float code;
        float cost;
        float quantity;
        float price;
        void get_data();
        void total_price();
        void display_data();
};
void item::get_data()
{
    cout<<"Item code: ";
    cin>>code;
    cout<<"Cost: ";
    cin>>cost;
    cout<<"Quantity: ";
    cin>>quantity;
}
void item::total_price()
{
    price = cost*quantity;
}
void item::display_data()
{
    cout<<"Item code: "<<code<<endl;
    cout<<"Cost: "<<cost<<endl;
    cout<<"Quantity: "<<quantity<<endl;
    cout<<"Total Price: "<<price<<endl;
}
int main()
{
    item i1;
    i1.get_data();
    i1.total_price();
    i1.display_data();
    return 0;
}