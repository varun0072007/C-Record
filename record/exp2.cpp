
#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() = 0;
    virtual ~Shape() = default;
};

class Circle : public Shape {
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    float area() override {
        return 3.14f * radius * radius;
    }
};

class Rectangle : public Shape {
    float length, breadth;

public:
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }

    float area() override {
        return length * breadth;
    }
};

class Triangle : public Shape {
    float base, height;

public:
    Triangle(float b, float h) {
        base = b;
        height = h;
    }

    float area() override {
        return 0.5f * base * height;
    }
};

int main() {
    Circle c(5);
    Rectangle r(4, 6);
    Triangle t(10, 8);

    Shape *ptr;

    ptr = &c;
    cout << "Area of Circle: " << ptr->area() << endl;

    ptr = &r;
    cout << "Area of Rectangle: " << ptr->area() << endl;

    ptr = &t;
    cout << "Area of Triangle: " << ptr->area() << endl;

    return 0;
}
