#include <iostream>
using namespace std;
class person{
    char name[30];
    int age;
    public:
        void getData();
        void display();
};
void person::getData(){
    cout<<"Enter name: ",cin>>name;
    cout<<"Enter age: ",cin>>age;
}
void person::display(){
    cout << "Name is "<<name<<endl;
    cout << "Age is "<<age<<endl;
}

int main(){
    person obj1;
    obj1.getData();
    obj1.display();
    return 0;
}