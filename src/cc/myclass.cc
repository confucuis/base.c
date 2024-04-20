#include "MyClass.h"

// 构造函数的定义
MyClass::MyClass() {
    // 在这里对 privateVar 进行初始化等操作
    privateVar = 0;
}

// 私有方法 privateMethod1 的定义
void MyClass::privateMethod1() {
    // 这里实现 privateMethod1 的功能
}

// 私有方法 privateMethod2 的定义
void MyClass::privateMethod2() {
    // 这里实现 privateMethod2 的功能
}

// 公有方法 publicMethod 的定义
void MyClass::publicMethod() {
    // 这里可以调用私有方法和操作私有属性
    privateMethod1();
    privateMethod2();
    // 可以操作 privateVar
}


