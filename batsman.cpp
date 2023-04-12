#include<iostream>
using namespace std;
class batsman
{
    private:
    int bcode;
    char bname[20];
    int innings,notout,runs;
    float batavg;
    float calcavg()
    {
        
      return runs/(innings-notout);
        
    }
    public:
    void readdata()
    {
        cout<<"Enter bcode no: ";
        cin>>bcode;
        cout<<"Enter name: ";
        cin>>bname;
        cout<<"Enter innings: ";
        cin>>innings;
        cout<<"Enter notout: ";
        cin>>notout;
        cout<<"Enter runs: ";
        cin>>runs;
        batavg = calcavg();
    }
    void displaydata()
    {
        cout<<"bcode no : "<<bcode<<endl;
        cout<<"name: "<<bname<<endl;
        cout<<"innings: "<<innings<<endl;
        cout<<"notout: "<<notout<<endl;
        cout<<"runs: "<<runs<<endl;
        cout<<"batting avg: "<<batavg<<endl; 
    }

};
int main()
{
    batsman b;
    b.readdata();
    b.displaydata();
}
