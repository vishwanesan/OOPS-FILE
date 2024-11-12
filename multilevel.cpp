// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Person{
  char name[30];
  public:
     void read(){
         cout<<"enter your name:";
         cin>>name;
     }
     void display(){
         cout<<name<<endl;
     }
};

class Sports: public Person{
      public:
      float marks=50;  
};
class Student:public Sports{
    float total;
    public:
    void display_total(){
        read();
        total = marks+30;
        display();
        cout<<total<<endl;
    }
    
};

int main() {
    Student st1;
    st1.display_total();

    return 0;
}
