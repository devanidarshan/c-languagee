#include<iostream>
using namespace std;
class test
{
    private:
    int testcode;
    string description;
    int nocandidates;
    int centerreqd;
    int CALCNTR()
    {
        return (nocandidates/100+1);
    }
    public:
    void shedule()
{
   cout<<"Enter testcode: ";
   cin>>testcode;
   cout<<"Enter description: ";
   cin>>description;
   cout<<"Enetr nocandidates: ";
   cin>>nocandidates;
   cout<<"Enter centerreqd: ";
   cin>>centerreqd;
   
   centerreqd = CALCNTR();
}
void disptest()
{
    cout<<"testcode: "<<testcode<<endl;
    cout<<"description: "<<description<<endl;
    cout<<"nocandidates: "<<nocandidates<<endl;
    cout<<"centerreqd: "<<centerreqd<<endl;
}
};
int main()
{
    test t;
    t.shedule();
    t.disptest();
}