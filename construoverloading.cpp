#include<iostream>
using namespace std;
class add
{
    public:
    add(int x,int y)
    {
        cout<<"Addition of x and y is: "<<x+y<<endl;

    }
    add(int a,int b,int c)
    {
        cout<<"Addition of a,b,c is : "<<a+b+c <<endl;
    }
    add (double a,double b)
    {
        cout<<"multiplication of a and b is: "<<a*b<<endl;
    }

};
int main()
{
    add x(10,20),y(2.5,3.5),z(1,2,3);
}