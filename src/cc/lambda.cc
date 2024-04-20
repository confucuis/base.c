#include <iostream>

class Lambda
{
private:
    int value;
public:
    void set_value(int value) {
         auto set = [this]() {
             value = value;
         };
         set();
    }
    void get_value() {
         auto get = [this]() {
             return value;
         };
         get();
    }
};

int main()
{
    Lambda lambda;
    lambda.set_value(100);

    std::cout << lambda.get_value() << std::endl;

    return 0;
}
