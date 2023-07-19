#include <iostream>
using namespace std;

class Vehicle
{
    int num_vehicle;
    int hour, rate;

public:
    Vehicle(int n, int h, int r) {
        num_vehicle=n;
        hour=h;
        rate=r;
        cout << "Object constructed using constructor" << endl;
    }

    int getNum() {
         return num_vehicle;
          }


    int getHour() {
         return hour; 
         }

    int getRate() { 
        return rate; 
        }

    Vehicle(Vehicle &v)
    {
        num_vehicle = v.getNum();
        hour = v.getHour();
        rate = v.getRate();
        cout << "Object constructed using copy constructor" << endl;
    }

    float totalCharge()
    {
        int total = num_vehicle * hour * rate;
        if (num_vehicle > 10)
            total =  0.9* total;
        return total;
    }

    void display()
    {
        cout << "No of vehicle = " << num_vehicle << endl;
        cout << "No of hours = " << hour << endl;
        cout << "Rate = " << rate << endl;
        cout << "Total = " << totalCharge() << endl;
    }
};

int main()
{
    Vehicle v1(5, 2, 100);
    v1.display();
    cout << endl;
    Vehicle v2(v1); // v2 = v1 is explicit//v2(v1) is implicit
    v2.display();
}