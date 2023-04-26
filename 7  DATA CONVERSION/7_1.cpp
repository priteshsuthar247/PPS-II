#include <iostream>
using namespace std;
class tons
{
    private:
    double ton;
    public:
    tons(double t)
    {
        ton = t;
    }
    double to_kg()
    {
        return ton * 100;
    }
    double to_gms()
    {
        return to_kg() * 1000;
    }
};
class kilo
{
    private:
    double kg, gms;
    public:
    kilo(double k, double g) 
    {
        kg = k;
        gms = g;
    }
    double to_ton() 
    {
        return kg / 100;
    }
    double to_gms() 
    {
        return (kg * 1000) + gms;
    }
};
int main() 
{
    double ton,kg,gm;
    cout<<"Tons: ";
    cin>>ton;
    cout<<"Kilos: ";
    cin>>kg;
    cout<<"Grams: ";
    cin>>gm;
    tons t(ton);
    cout <<ton<<"tons"<< " = " << t.to_kg() << " kg" << endl;
    cout <<ton<<"tons"<< " = " << t.to_gms() << " gms" << endl;
    kilo k(kg,gm);
    cout <<kg<<"kg "<<gm<<"gm "<< " = " << k.to_ton() << " tons" << endl;
    cout <<kg<<"kg "<<gm<<"gm "<< " = " << k.to_gms() << " gms" << endl;
    return 0;
}