#include<iostream>
using namespace std;
class student
{
    private:
    int admno;
    char sname[20];
    float eng,sci,maths,total;
    float ctotal()
    
    {
        
      return eng+sci+maths;
        
    }
    public:
    void takedata()
    {
        cout<<"Enter admin no: ";
        cin>>admno;
        cout<<"Enter name: ";
        cin>>sname;
        cout<<"Enter science marks: ";
        cin>>sci;
        cout<<"Enter english marks: ";
        cin>>eng;
        cout<<"Enter maths marks: ";
        cin>>maths;
        total= ctotal(); 
    }
    void showdata()
    {
        cout<<"admin no : "<<admno<<endl;
        cout<<"name: "<<sname<<endl;
        cout<<"science marks: "<<sci<<endl;
        cout<<"maths marks: "<<maths<<endl;
        cout<<"english marks: "<<eng<<endl;
        cout<<"total marks:  "<<total<<endl; 
    }

};
int main()
{
    student s;
    s.takedata();
    s.showdata();
}
