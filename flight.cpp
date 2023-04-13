#include<iostream>
using namespace std;
class flight
{
    private:
    int flightno;
    string destination;
    float distance,fuel;
    float calfuel()
    {
        if(distance<=1000)
        {
            fuel=500;

        }
        else if (distance>1000&& distance<=2000)
        {
            fuel=1100;
        }
        else
        {
            fuel=2200;

        }
        return fuel;

    }
    public:
    void feedinfo()
    {
        cout<<"Enter flight no: ";
        cin>>flightno;
        cout<<"Enter destination: ";
        cin>>destination;
        cout<<"Enter distance: ";
        cin>>distance;

        fuel=calfuel();
    }
    void showinfo()
    {
        cout<<"flightno: "<<flightno<<endl;
        cout<<"destination: "<<destination<<endl;
        cout<<" distance: "<<distance<<endl;
        cout<<"fuel: "<<fuel<<endl;

    }
};
int main()
{
    flight a;
    a.feedinfo();
    a.showinfo();
}


