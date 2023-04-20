#include<iostream>
using namespace std;
class box
{
    int l,w,h;
    public:
    void setdata(int a,int b,int c)
    {
        l=a,w=b,h=c;

    }
    
    int getdata()
    {
        return l*w*h;
    }

    friend box operator+(box,box);
};    
    box operator+ (box a,box n)
    {
        box t;
        t.l=a.l+n.l;
        t.w=a.w+n.w;
        t.h=a.h+n.h;
        return t;
    }

int main()
{   
    box a,b,c;
    a.setdata(6,6,6);
    cout<<"Volume of box A is: "<<a.getdata()<<endl;
    b.setdata(3,3,3);
    cout<<"Volume of box B is: "<<b.getdata()<<endl;
    c=a+b;
    cout<<"Volume of box c is: "<<c.getdata()<<endl;
}