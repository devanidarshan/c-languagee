#include<iostream>
using namespace std;
class student 
{
    string name;
    int rollno;

    public:
    void setdata(int rollno,string name)
    {
        this -> rollno=rollno;
        this -> name = name;
    }


void getdata()
  {
    cout<< "students rollno: "<<rollno<<endl;
    cout<< "students name: "<<name<<endl;
  }
};

int main()
{
    student s;
    s.setdata(20,"skill");
    s.getdata();
}






















