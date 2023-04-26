#include <iostream>
#include <iomanip>
using namespace std;
class dm;
class db
{
	public:
	float feet,inches;
	void getdata(float p,float q)
	{
		feet=p;
		inches=q;
	}
	float ftm(float);
	float icm(float);
	friend float sum(db,dm);
};
class dm
{
	public:
	float m,cm;
	void getdata(float p,float q)
	{
		m=p;
		cm=q;
	}
	float mf(float);
	float cmi(float);
	friend float sum(db,dm);
};
float db::ftm(float m)
{
    return feet*(0.3048);
}
float db::icm(float c)
{
    return inches*(2.54);
}
float dm :: mf(float f)
{
    return m*(3.28);
}
float dm::cmi(float i)
{
    return cm*(0.3937);
}

float sum(db a, dm b)
{
    cout<<"Addition: "<<a.feet+b.mf(b.m)<<"ft "<<setw(10)<<a.inches+b.cmi(b.cm)<<" in"<<endl;
	cout<<"Addition: "<<b.m+a.ftm(a.feet)<<"m "<<setw(10)<<b.cm+a.icm(a.inches)<<" cm"<<endl;
	return 0;
}
int main()
{
    db a1;
    float a,b,c,d;
    cout<<"Feet: ";
    cin>>a;
    cout<<"Inches: ";
    cin>>b;
    cout<<"Metre: ";
    cin>>c;
    cout<<"Centimetre: ";
    cin>>d;
    a1.getdata(a,b);
    dm b1;
    b1.getdata(c,d);
    sum(a1,b1);
    return 0;
}