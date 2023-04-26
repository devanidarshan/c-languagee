#include<iostream>
using namespace std; 
class base1
{
    protected :
    int n,i;
     
    public:
    void setn()
    {
       cout<<"enter the n : ";
       cin>>n;
    }

};

class base2
{
    protected :
    int m;
     
    public:
    void setm()
    {
       cout<<"enter the m : ";
       cin>>m;
    }

};
class derived : public base1 ,public base2
{
    public:
    void odd()
    {
       for(i=m;i<n;i++)
       if(i%2!=0)
       {
        cout<<" "<<i<<endl;
       }
    }
    
};

int main()
{`
    derived d;
    d.setn();
    d.setm();
    d.odd();
}