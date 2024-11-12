#include<iostream>
using namespace std;

class person {
    char name[30];
    char address[40];
public:
    void read() {
        cout << "Enter name and address: ";
        cin >> name >> address;
    }
    void display() {
        cout << "Name: " << name << endl << "Address: " << address << endl;
    }
};

class Accounts : public person {
    int accno;
    float balance;
public:
    void set_data(int acc, float bal) {
        accno = acc; 
        balance = bal;
    }
    void get_data() {
        cout << "Account number: " << accno << endl << "Balance: " << balance << endl;
    }
    void deposit(float amount) {
        balance += amount;
    }
    void withdraw(float amount2) {
        if (balance < amount2) { 
            cout << "Error: Insufficient funds." << endl;
        } else {
            balance -= amount2;
        }
    }
};

int main() {
    Accounts acc1;
    acc1.set_data(121004, 0.00); 
    acc1.read();
    acc1.display();
    acc1.deposit(500.00); 
    acc1.withdraw(1000.00); 
    acc1.get_data();
    return 0;
}