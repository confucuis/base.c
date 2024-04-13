#include <array>
#include <deque>
#include <iostream>

int main()
{
    // 数组
    std::cout << "数组: " << std::endl;
    std::array<int, 5> arra = {100, 23, 49, 56, 73};
    for (auto item = arra.begin(); item != arra.end(); item++) {
        std::cout << *item << std::endl;
    }

    // 双端队列
    std::cout << "双端队列: " << std::endl;
    std::deque<int> dq;
    for (int idx=0; idx<5; idx++) dq.push_back(idx);

    std::deque<int>::iterator item = dq.begin();
    while (item != dq.end()) std::cout << *item++ << std::endl;

    return 0;
}
