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
    void square()
    {
       for(i=0;i<n;i++)
      
       {
        cout<<" "<<i*i<<endl;
       }


    }
};
class abc: public derived1
{
    public:
    void abcdata()
    {
        cout<<"square is: "<<i<<endl;
    }
};
int main()
{
    derived1 d;
    d.setn();
    d.square();

}