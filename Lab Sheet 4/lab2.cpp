// Write a program that has a class with a dynamically allocated 
// character array as its data member. 
// One object should contain "Engineers are" and
// another should contain " Creatures of logic".
// Member function join() should concatenate
// two strings by passing two objects as arguments. 
// Display the concatenated string through
// a member function. 
// Use constructors to allocate and initialize the data member.
// Also, write a destructor to free the allocated memory for the character array. 
// Make your own function for the concatenation of two strings.



#include <iostream>
using namespace std;

class conc{
    private:
    char *str1;

    public:
    conc(){

    }

    conc(const char* s1){
        int length= leng(s1)+1;
        str1 = new char[length];
        for(int i=0;i<=length;i++){
          str1[i]=s1[i];
         }
      }

      ~conc(){
        delete[] str1;
      }

      int leng(const char *ptr){
        int lengthc=0;
        do{
          lengthc++;
          *ptr++;

        }while(*ptr!='\0');
        return (lengthc);
      }

      void join(conc c2,conc c1){
        auto len = leng(c1.str1);
        c1.str1 += len;
         while(*(c1.str1++)=*(c2.str1++));

      }
    void display(){
      cout<<str1;
    }
};


int main(){
    conc c1("Engineers are");
    conc c2(" creatures of logic");
    conc c3;
   c3.join(c2,c1);
   c1.display();

    return 0;
}
