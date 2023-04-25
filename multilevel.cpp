#include<iostream>
using namespace std; 
class base1
{
    protected :
    int n;
     
    public:
    void setn(int x)
    {
       n=x;
    }

};

class base2 : public base1
{
    protected :
    int m;
     
    public:
    void setm(int x)
    {
       m=x;
    }

};
class derived : public base2
{
    public:
    void mul()
    {
        cout<<"Multiplication of m and n is:  "<<m*n<<endl;
    }
    
};

int main()
{
    derived d;
    d.setn(10);
    d.setm(50);
    d.mul();
}