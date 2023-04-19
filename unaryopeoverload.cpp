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
    box operator-- (int)
    {
        box t;
        t.l=l--;
        t.w=w--;
        t.h=h--;
        return t;
    }
};
int main()
{   
    box a,b;
    a.setdata(7,7,7);
    cout<<"Volume of box A is: "<<a.getdata()<<endl;
    a--;
    b=a;
    cout<<"Volume of box B is: "<<b.getdata()<<endl;
      
}