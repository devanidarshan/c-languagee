#include<iostream>
using namespace std;
class base
{
    public:
    virtual void show()=0;
   
};

class derived:public base
{
    public:
    void show()
    {
        cout<<"Derived class show function called...."<<endl;
    }
};
int main()
{
    base *p;
    derived d;

    p=&d;
    p-> show();
}