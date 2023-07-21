/*
Create a class with a data member to hold a "serial number" for each object created from the class. 
That is, the first object created will be numbered 1, the second 2, and so on by using the basic concept 
of static data members. Use static member function if it is useful in the program. Otherwise, make a 
separate program that demonstrates the use of static member function.
*/

#include <iostream>
using namespace std;
class serial{
    private:
    static int serial_num;
    public:
        
    static void display(){
        cout<<"The serial no of object created recently is:"<<serial_num<<endl;
        serial_num++;
    }
};

int serial::serial_num=1;
int main(){
    serial s1;
    serial s2;
    s1.display();
    s2.display();
    return 0;
}