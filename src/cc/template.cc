// 模板
#include <iostream>

template <typename T>
class Arithmetic
{
public:
  T add(T a, T b)
  {
    return a + b;
  }
  T subtract(T a, T b)
  {
    return a - b;
  }
};

int main()
{
  Arithmetic<int> iarithmetic;
  std::cout << iarithmetic.add(3, 5) << std::endl;
  std::cout << iarithmetic.subtract(4, 1) << std::endl;

  Arithmetic<float> farithmetic;
  std::cout << farithmetic.add(3.3, 4.5) << std::endl;
  std::cout << farithmetic.subtract(7.7, 2.3) << std::endl;

  return 0;
}
