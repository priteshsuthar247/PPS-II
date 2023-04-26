#include <iostream>
using namespace std;
class circle 
{
    protected:
    double rad;
    public:
    circle(double r);
	double area();
};
circle::circle(double r) 
{
        rad = r;
}
double circle::area()
{
    return 3.14 * rad*rad;
}
class cylinder : public circle 
{
    private:
    double height;
    public:
    cylinder(double r,double h);
	double volume();
};
cylinder::cylinder(double r, double h) : circle(r) 
{
    height = h;
}
double cylinder::volume()
{
    return 3.14 * rad*rad * height;
}
int main() 
{
	double r,h;
	cout<<"Radius: ";
	cin>>r;
    circle c(r);
	cout<<"Height: ";
	cin>>h;
    cylinder cyl(r, h);
    cout << "Area of circle: " << c.area() << endl;
    cout << "Volume of cylinder: " << cyl.volume() << endl;
    return 0;
}