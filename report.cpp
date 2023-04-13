#include<iostream>
using namespace std;
class REPORT
{
    private:
    char adno[5];
    char name[20];
    float marks [5];
    float average;
    void GETAVG();
    
    public:
    void READINFO()
    {
        cout<<"Enter an admission no: ";
        cin>>adno;
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter marks: ";
        cin>>marks;
         
         GETAVG();
    } 
    void DISPLAYINFO()
    {
        cout<<"admission  no: "<<adno<<endl;
        cout<<"name: "<<name<<endl;
        cout<<"marks: "<<marks<<endl;
        cout<<"average marks: "<<average<<endl;
    }

};
int main()
{
    REPORT r;
    r.READINFO();
    r.DISPLAYINFO();
}
