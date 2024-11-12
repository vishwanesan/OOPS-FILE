#include<iostream>
using namespace std;
class Person{
    char name[30];
    char address[40];
    public:
        void read(){
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter address :";
            cin>>address;
        }
        void display(){
            cout<<name<<endl;
            cout<<address<<endl;
        }
};

class Account:public Person{
    int acc_no;
    float balance;
    public:
        void set_data(int acc, float bal){
            acc_no=acc;
            balance=bal;
        }
        void get_data(){
            cout<<"Account No: "<<acc_no<<endl;
            cout<<"Balance: "<<balance<<endl;
        }
        void deposit(float amount){
            balance += amount;
            cout<<"Amount Deposited"<<endl;
        }
        void withdraw(float amount2){
            if(amount2>balance)
                cout<<"Error"<<endl;
            else
                balance -= amount2;   
                cout<<"Amount Withdrawn"<<endl; 
        }
};

int main(){
    Account acc1;
    acc1.set_data(121004,0.0);
    acc1.read();
    acc1.display();
    acc1.deposit(500.0);
    acc1.withdraw(300.0);
    return 0;
}
