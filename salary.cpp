#include <iostream>
using namespace std;

class employee {
private: 
    int salary;
public:
    void setSalary(int s) {
        salary = s;
    }    
    int getSalary() {
        return salary;
    }
};

class marks {
private:
    int rno;
    int percentage;
public:
    marks() : rno(0), percentage(0) {}

    marks(int r, int p) : rno(r), percentage(p) {}

    void displayMarks() {
        cout << "Roll no: " << rno << endl;
        cout << "Percentage: " << percentage << endl;
    }
};

class student {
private:
    marks objM;
    string name;
public:
    void getName() {
        cout << "Enter name: ";
        cin >> name;
    }

    void displayResult(marks obj) {
        objM = obj;
        cout << "Name: " << name << endl;
        objM.displayMarks();
    }
};

int main() {
    employee myObj;
    myObj.setSalary(50000);
    cout << "Employee Salary: " << myObj.getSalary() << endl;

    marks mks[2] = {
        marks(100, 95),
        marks(101, 85)
    };
    
    student stds[5];
    for (int i = 0; i < 2; i++) {
        stds[i].getName();
        stds[i].displayResult(mks[i]);
    }

    return 0;
}
