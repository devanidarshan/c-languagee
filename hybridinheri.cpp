#include<iostream>
using namespace std;
class base
{
    protected:
    int n;
    public:
    void setn(int x)
    {
        n=x;
    }
};
class derived1: public base
{
    public:
    void add()
    {
        cout<<"Addition is: "<<n+n<<endl;
    }
};
class derived2 : public base
{
    public:
    void mul()
    {
        cout<<"Multiplication is: "<<n*n<<endl;
    }
};
class abc : public derived1
{
    public:
    void abcdata()
    {
        cout<<"sub is: "<<n-2<<endl;
    }
};
int main()
{
    abc z;
    z.setn(10);
    z.add();
    z.abcdata();

    derived2 d;
    d.setn(15);
    d.mul();
}