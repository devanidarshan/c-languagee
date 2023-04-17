#include<iostream>
using namespace std;
class volume
{
    public:
    int sum(int a)
    {
        return a * a * a;
        
    }
    
    double sum(double a)
    {
       return  3.14*(a*a)*a;
    }
    int sum(double a,double b,double c)
    {
       return a*b*c;
    }
    double sum(double a,double b)
    {
        return (4/3)*3.14*a*a*a;
    }

};
int main()
{
    volume x;
    cout<<"Volume of cube is:  "<<x.sum(3)<<endl;
    cout<<"Volume of cylinder is: "<<x.sum(3.4)<<endl;
    cout<<"Volume of rectangle is: "<<x.sum(5,6,7)<<endl;
    cout<<"Volume of sphere is: "<<x.sum(5.5)<<endl;
}
