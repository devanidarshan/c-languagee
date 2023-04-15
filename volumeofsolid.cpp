#include<iostream>
using namespace std;
class volume
{
    public:
    volume(int a)
    {
        cout<< "Volume of cube: "<<a * a * a<<endl;
    }
    volume(double a)
    {
        cout<< "Volume of cylinder: "<<3.14*(a*a)*a<<endl;
    }
    volume(double a,double b,double c)
    {
        cout<< "Volume of rectangle: "<<a*b*c<<endl;
    }
    volume(double a,double b)
    {
        cout<< "Volume of sphere:  "<<(4/3)*3.14*a*a*a<<endl;
    }

};
int main()
{
    volume a(5),b(5.5),c(6,8,34),d(3);
}
