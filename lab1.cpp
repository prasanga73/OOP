#include <iostream>
using namespace std;

class time{
    private:
    int hour;
    int minute;
    int second;

    public:
    time(){
        hour=0;
        minute=0;
        second=0;
    }
    time(int hour,int minute,int second){
        this->hour=hour;
        this->minute=minute;
        this->second=second;

    }
void output(){
    cout<<"The time object is:"<<hour<<":"<<minute<<":"<<second<<endl;
}
    time add(time t2){
        time temp;
        temp.second=second+t2.second;
        temp.minute=minute+t2.minute+temp.second/60;
        temp.second= temp.second%60;
        temp.hour=hour+t2.hour+temp.minute/60;
        temp.minute=temp.minute%60;
        return temp;
        
    }
    void twentyFour(){
        if(hour>=24){
            cout<<"Time objects crossed limit for 24 hour format."<<endl;
        }
        else{
        cout<<"The time in 24 hour format is:"<<hour<<":"<<minute<<":"<<second<<endl;
        }
    }

    void twelveHour(){
        if (hour < 24){
         if (hour < 12 ){
            cout<<"The time in 12 hour format is :  "<<hour<<":"<<minute<<":"<<second<<" am"<<endl;
        }
        if (hour == 12){
            cout<<"The time in 12 hour format is :  "<<hour<<":"<<minute<<":"<<second<<" pm"<<endl;
        }
        if (hour >12){
            hour = hour-12;
            cout<<"The time in 12 hour format is :  "<<hour<<":"<<minute<<":"<<second<<" pm"<<endl;
        }
        }
        else{
            cout<<"Time objects crossed limit for 12 hour format."<<endl;
        }
    }


};
int main(){
    time t1(12,22,23),t2(2,22,23),t3;
    t1.output();
    t2.output();
    t3=t1.add(t2); // or we can use t3= t3.add(t1,t2) and the add function should be add(time t1, time t2)
    t3.twentyFour();
    t3.twelveHour();

    return 0;
}