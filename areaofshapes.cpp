#include<iostream>
using namespace std;
class area
{
    public:
    area (double r)
    {
        cout<<"Area of circle : "<<3.14 * r * r <<endl;
    }
    area (int l)
    {
        cout <<"Area of square : "<<l*l << endl;
    }
    area (int a,int b)
    {
        cout <<"Area of rectangle : "<< a * b <<endl;;
    }
    area (double l,double h)
    {
        cout <<"Area of triangle : "<<(h*l/2)<<endl;

    }
    
};
int main()
{
    area a(3.5),b(5,7),c(9,3),d(5.6,3.2);
}