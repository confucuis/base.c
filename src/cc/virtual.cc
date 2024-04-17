#include <string>
#include <iostream>


class Base
{
public:
    // 1. 虚函数,可以被派生类重写.
    // 2. 并在运行时动态绑定到对象的实际类型.
    // 3. 通过基类指针或引用调用该虚函数时,
    //    程序会根据实际对象的类型调用正确的函数版本,
    //    而不是仅仅根据指针或引用的类型来决定调用哪个函数.
    virtual void Print(std::string message) {
        std::cout << "Base: " + message << std::endl;
    }
};

class Derive: public Base
{
public:
    virtual void Print(std::string message) {
        std::cout << "Derive: " + message << std::endl;
    }
};

int main()
{
    // 通过基类指针调用
    Base *b = new Derive();
    b->Print("hello world");
    delete b;

    // 通过基类引用调用
    Derive d;
    Base &bb = d;
    bb.Print("hello wagawaga");

    return 0;
}
