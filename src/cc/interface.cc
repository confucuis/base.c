/*
* 接口实现
*/
#include <iostream>

// 定义接口
class Shape
{
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};

// Circle实现接口: Shape
class Circle: public Shape
{
private:
    double radius;
public:
    Circle(double radius) {
        this->radius = radius;
    }

    double area() const override {
        return this->radius * this->radius * 3.14;
    }

    double perimeter() const override {
        return this->radius * 3.14 * 2;
    }
};

// Rectangle实现接口: Shape
class Rectangle: public Shape
{
private:
    double width;
    double heigth;
public:
    Rectangle(double width, double heigth) {
        this->width = width;
        this->heigth = heigth;
    }

    double area() const override {
        return this->width * this->heigth;
    }

    double perimeter() const override {
        return (this->width + this->heigth) * 2;
    }
};

void PrintShape(Shape *shape)
{
    std::cout << "area: " << shape->area() << std::endl;
    std::cout << "perimeter: " << shape->perimeter() << std::endl;
}

int main()
{
    Circle circle(4);
    Rectangle rectangle(2, 3);

    std::cout << "==== circle ====" << std::endl;
    PrintShape(&circle);
    std::cout << "=== rectangle ==" << std::endl;
    PrintShape(&rectangle);

    return 0;
}
