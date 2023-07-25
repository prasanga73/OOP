#include <iostream>
using namespace std;
class another;
class cartesian{
    int x,y;
    public:
    cartesian (int a,int b){
        x=a;y=b;
    }
    friend int sum(cartesian,another);

};
class another{
    int x,y;
    public:
    another (){}
    another (int a,int b){
        x=a;y=b;
    }

    friend int sum(cartesian,another);
};
int sum(cartesian c,another a){
    c.x=c.x+a.x;
    c.y=c.y+a.y;
    cout<<"The sum of the co-ordinates are: "<<c.x<<","<<c.y;

}


int main(){
    cartesian c(10,5);
    another a(12,5);
    another b;
    sum(c,a); 
    
    return 0;
}