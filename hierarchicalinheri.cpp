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
int main()
{
    derived1 a;
    a.setn(10);
    a.add();

    derived2 b;
    b.setn(2);
    b.mul();
}