#include <iostream>
#include <list>

int main()
{
    // 创建 std::list<int>
    std::list<int> myList;

    // 从标准输入读取整数，并添加到链表中
    int num;
    std::cout << "输入一系列整数： ";
    while (std::cin >> num)
    {
        myList.push_back(num);
    }

    // 删除第一个和最后一个元素
    if (!myList.empty())
    {
        myList.pop_front(); // 删除第一个元素
        myList.pop_back();  // 删除最后一个元素
    }

    // 打印剩余的链表
    std::cout << "剩余的链表为：";
    for (const auto &element : myList)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
