#include<iostream>
using namespace std;
class book
{
    private:
    int bookno;
    int book;
    char booktitle[20];
    float price;
    float total_cost()
    {
        price = book * price;
    }
    public:
    void input()
    {
        cout<<"Enter book no: ";
        cin>>bookno;
        cout<<"Enter booktitle : ";
        cin>>booktitle;
        cout<<"Enter price: ";
        cin>>price;
        cout<<"Enter book: ";
        cin>>book;
        total_cost();
    } 
    void purchase()
    {
        cout<<"Book no: "<<bookno<<endl;
        cout<<"book title: "<<booktitle<<endl;
        cout<<"book price: "<<price<<endl;
        cout<<"Book : "<<book<<endl;


    }

};
int main()
{
    book b;
    b.input();
    b.purchase();
}
