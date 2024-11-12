#include <iostream>
#include <string>
using namespace std;

class StringConcat {
private:
    string str;

public:
    StringConcat() : str("") {}
    StringConcat(string s) : str(s) {}

    // Overload + operator
    StringConcat operator+(const StringConcat& obj) {
        StringConcat result;
        result.str = this->str + obj.str;
        return result;
    }

    // Friend function to concatenate two strings
    friend StringConcat concat(const StringConcat& obj1, const StringConcat& obj2) {
        StringConcat result;
        result.str = obj1.str + obj2.str;
        return result;
    }

    void display() {
        cout << "Concatenated String: " << str << endl;
    }
};

int main() {
    StringConcat str1("Hello");
    StringConcat str2("World");

    // Using + operator
    StringConcat result1 = str1 + str2;
    result1.display();

    // Using friend function
    StringConcat result2 = concat(str1, str2);
    result2.display();

    return 0;
}