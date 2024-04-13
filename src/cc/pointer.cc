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

    return 0;
}
