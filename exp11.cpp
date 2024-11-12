#include<iostream>
using namespace std;
class person{
    public:
        char name[30];
        int age;

};
class sport{
    public:
    char sp_name[30];
    int medals;
};
  class student: private person, sport{
    public:
        void display(){
            cout<<name<<endl<<age<<endl;
            cout<<sp_name<<endl<<medals<<endl;
        }
        void setter(){
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter age: ";
            cin>>age;
            cout<<"Enter sport: ";
            cin>>sp_name;
            cout<<"Enter no of medals awarded: ";
            cin>>medals;
        }

};
int main(){
    student s1;
    s1.setter();
    s1.display();
    return 0;
}
