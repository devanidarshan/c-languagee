#include<iostream>
using namespace std;
class REPORT
{
    private:
    char adno;
    char name[20];
    float marks [5];
    float total;
    float average;
    void GETAVG()
    {
    float sum=0;
    for(int i=1;i<=5;i++)
       {
        sum = sum + marks[i];
       }
       average=sum/5;
    }
    public:
    void READINFO()
    {
        cout<<"Enter an admission no: ";
        cin>>adno;
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter 5 subject of marks: "<<endl;
        for(int i=1;i<=5;i++)
        {
            cin>>marks[i];
        }
         
        GETAVG();
    } 
    void DISPLAYINFO()
    {
        cout<<"admission  no: "<<adno<<endl;
        cout<<"name: "<<name<<endl;
        cout<<"5 sub marks is : ";
        for(int i=1;i<=5;i++)
        {
            cout<<marks[i]<<" ";
        }

        cout<<"\naverage marks: "<<average<<endl;
    }

};
int main()
{
    REPORT r;
    r.READINFO();
    r.DISPLAYINFO();
}
