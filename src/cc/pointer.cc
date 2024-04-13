#include <memory>
#include <string>
#include <iostream>

int main()
{
    // 通过指针去修改变量的值
    std::string *name;
    std::string first_name, second_name;
    name = &first_name;
    *name = "张三";
    name = &second_name;
    *name = "李四";
    std::cout << first_name + "\n" << second_name << std::endl;

    // 堆上分配内存
    std::string *ss = new std::string("hello world!");
    std::cout << *ss << std::endl;
    delete ss;   

    // 智能指针
    /*独占所有权的智能指针*/
    std::unique_ptr<std::string> foo(new std::string("foo!"));
    std::cout << *foo << std::endl;
    /*多个指针共享对象的智能指针*/
    std::shared_ptr<std::string> bar(new std::string("bar!"));
    std::cout << *bar << std::endl;

    return 0;
}
