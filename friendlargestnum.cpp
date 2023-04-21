#include<iostream>
using namespace std;
class box
{
    int a,b;
    friend box setdata(box t );
    public:
   void setdata()
   {
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
   }
   
};
box setdata(box t)
 {
    if(t.a>t.b)
    {
        cout<<"Largest number is a: "<<t.a;

    }
    else
    {
        cout<<"Largest  number is b: "<<t.b;

    }

 }  
 int main()
 {
    box t;
    t.setdata();
    setdata(t);
 } 