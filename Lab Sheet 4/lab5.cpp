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
    cout << "non const object calling non const mem function = " << r.get() << endl;  // non const object. non const mem func
    cout << "non const object calling const mem func = " << r.const_get() << endl; // non const object. const mem
    const Relation c(2);
    cout << "const object calling const mem function = " << c.const_get(); // const object.cont mem func
    // cout << c.get();  cannot be called
}