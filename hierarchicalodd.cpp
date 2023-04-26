#include<iostream>
using namespace std;
class base
{
    protected:
    int i,n;
    public:
    void setn()
    {
       cout<<"enter the number: ";
       cin>>n;
    }
};
class derived1: public base
{
    public:
    void odd()
    {
       for(i=0;i<n;i++)
       if(i%2!=0)
       {
        cout<<" "<<i<<endl;
       }


    }
};

int main()
{
    derived1 d;
    d.setn();
    d.odd();

    
}