#include<iostream>
using namespace std;
class box
{
    int l,b;
    friend box sum(box,box,box);
    public:
    void setdata(int x,int y)
    {
        l=x,b=y;

    }
    
    int getdata()
    {
        return l*b;
    }

    
};    
    box sum (box a,box c,box x)
    {
        box t;
        t.l=a.l+c.l+x.l; 
        t.b=a.b+c.b+x.b;
        return t;
    }

int main()
{   
    box a,b,c,d;
    a.setdata(2,2);
    b.setdata(3,3);
    d.setdata(4,4);
    cout<<"area  of box A is: "<<a.getdata()<<endl;
    cout<<"area  of box B is: "<<b.getdata()<<endl;
    cout<<"area  of box D is: "<<d.getdata()<<endl;
    c=sum(a,b,d);
    cout<<"area  of box C is: "<<c.getdata()<<endl;
}