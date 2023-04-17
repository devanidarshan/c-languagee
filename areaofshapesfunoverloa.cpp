#include<iostream>
using namespace std;
class area
{
    public:
    double sum (double r)
    {
       return 3.14 * r * r ;
    }
    int sum (int l)
    {
        return l*l ;
    }
    int sum (int a,int b)
    {
        return a * b;
    }
    double sum (double l,double h)
    {
        return (h*l/2);

    }
    
};
int main()
{
    area x;
    cout <<"Area of circle :"<<x.sum(6.5)<<endl;
    cout <<"Area of square : "<<x.sum(7)<<endl;
    cout << "Area of rectangle : "<<x.sum(8,9)<<endl;
    cout <<"Area of triangle : "<<x.sum(5.3,2.2)<<endl;
}