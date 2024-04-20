#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass {
private:
    int privateVar;

    void privateMethod1();
    void privateMethod2();

public:
    // 构造函数和其他公有方法的声明可以放在这里
    MyClass(); // 构造函数声明
    void publicMethod(); // 公有方法声明
};

#endif // MYCLASS_H

