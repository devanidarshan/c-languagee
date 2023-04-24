#include<iostream>
using namespace std; 
class base
{
    protected :
    int i,n;
     
    public:
    void setdata()
    {
       cout<<"Enter the number: " ;
       cin>>n;
    }

};

class derived : public base
{
    public:
    void getdata()
    {
    for(i=0;i<n;i++)
    {
        cout<<" "<<i*i<<endl;
    }
    }
};

int main()
{
    derived d;
    d.setdata();
    d.getdata();
}