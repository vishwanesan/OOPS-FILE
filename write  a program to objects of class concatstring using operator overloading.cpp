#include <iostream>
#include <string>

class ConcatString {
private:
    std::string str;

public:
    ConcatString(const std::string& s) : str(s) {}

    ConcatString operator+(const ConcatString& other) {
        ConcatString result(str + other.str); 
        return result;
    }

    void display() {
        std::cout << str << std::endl;
    }
};

int main() {
    ConcatString s1("Hello, ");
    ConcatString s2("World!");

    ConcatString result = s1 + s2;

    result.display();

    return 0;
}
