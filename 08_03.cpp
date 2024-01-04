#include <algorithm>
#include <iostream>
#include <vector>

// 函数用于去重和升序排序
void uniqueSort(std::vector<int> &vec)
{
    // 去重
    std::sort(vec.begin(), vec.end());
    auto it = std::unique(vec.begin(), vec.end());
    vec.erase(it, vec.end());
}

int main()
{
    std::vector<int> myVector;
    int num;

    // 从标准输入读取整数，并添加到向量中
    std::cout << "输入一系列整数：";
    while (std::cin >> num)
    {
        myVector.push_back(num);
    }

    // 调用函数去重和排序
    uniqueSort(myVector);

    // 打印处理后的容器元素
    std::cout << "按升序排序后的元素为: ";
    for (const auto &element : myVector)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
