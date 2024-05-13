#include <iostream>
#include <string>

struct Animal {
public:
    Animal(int age, std::string name) {
        this->age = age;
        this->name = name;
    }
    int get_age() {
        return this->age;
    }
    std::string get_name() {
        return this->name;
    }
private:
    int age;
    std::string name;
};

int main() 
{
    Animal animal(6, "cat");
    std::cout << animal.get_name() << " " << animal.get_age() << std::endl;

    return 0;
}
