#include "../src/storage.hpp"

int main()
{
  Storage storage("data.txt");

  storage.set("name", "zhangsan");
  storage.set("addr", "beijing");

  std::cout << "Name: " << storage.get("name") << std::endl;
  std::cout << "Addr: " << storage.get("addr") << std::endl;
  storage.del("addr");

  return 0;
}
