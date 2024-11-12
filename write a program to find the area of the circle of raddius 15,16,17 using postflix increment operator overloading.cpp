//write a program to find the area of the circle of raddius 15,16,17 using postflix increment operator overloading
#include <iostream>
#include <cmath>

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double getRadius() const {
        return radius;
    }

    double area() const {
        return M_PI * radius * radius;
    }

    Circle operator++(int) {
        Circle temp = *this;
        radius++;
        return temp;
    }
};

int main() {
    Circle c1(15), c2(16), c3(17);

    std::cout << "Area of circle with radius " << c1.getRadius() << ": " << c1.area() << std::endl;
    std::cout << "Area of circle with radius " << (c1++).getRadius() << ": " << c1.area() << std::endl;

    std::cout << "Area of circle with radius " << c2.getRadius() << ": " << c2.area() << std::endl;
    std::cout << "Area of circle with radius " << (c2++).getRadius() << ": " << c2.area() << std::endl;

    std::cout << "Area of circle with radius " << c3.getRadius() << ": " << c3.area() << std::endl;
    std::cout << "Area of circle with radius " << (c3++).getRadius() << ": " << c3.area() << std::endl;

    return 0;
}
