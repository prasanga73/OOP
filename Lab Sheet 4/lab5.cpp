// Write a program that illustrates the following relationship and comment on them. 

// i) const_object.non_const_mem_function

// ii) const_object.const_mem_function

// iii) non_const_object.non_const_mem_function



#include <iostream>
using namespace std;

class Relation
{
    const int id;

public:
    Relation(int i) : id(i) {}
    int get() { return id; }
    int const_get() const { return id; }
};

int main()
{
    Relation r(1);
    cout << "Non constant object calling non constant member function = " << r.get() << endl;  // non const object. non const mem func
    cout << "Non constant object calling constant member function = " << r.const_get() << endl; // non const object. const mem
    const Relation c(2);
    cout << "Constant object calling constant member function = " << c.const_get(); // const object.cont mem func
    // cout << c.get();  cannot be called because constant object cannot call non constant member function
}
