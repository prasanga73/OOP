#include <iostream>
using namespace std;

class Department
{
    int id;
    char name[20];

public:
      int leng(const char *ptr){
        int lengthc=0;
        do{
          lengthc++;
          *ptr++;

        }while(*ptr!='\0');
        return (lengthc);
      }

    Department(int i, const char* n)
    {
        id = i;
        for(int x=0;x<=leng(n);x++){
            name[x]=n[x];
              }

        cout << "Object "<< name << " has been contructed"<< endl;
    }

    ~Department()
    {
        cout << "Object " << name << " goes out of scope.";
    }
};

int main()
{
    Department d(1, "Purwanchal");
    return 0;
}