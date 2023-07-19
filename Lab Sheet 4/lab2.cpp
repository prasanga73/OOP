#include <iostream>
#include <cstring>
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