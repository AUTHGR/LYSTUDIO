#include <forward_list>
#include <iostream>

template <typename T>
void filterList(std::forward_list<T> &myList, const T &threshold)
{
    myList.remove_if([threshold](const T &value)
                     { return value < threshold; });
}

int main()
{
    std::forward_list<int> myList;

    std::cout << "输入整数序列，以非整数结束输入:";

    int value;
    while (std::cin >> value)
    {
        myList.push_front(value);
    }

    std::cout << "输入阈值: ";
    int threshold;
    std::cin >> threshold;

    filterList(myList, threshold);

    std::cout << "处理后的链表元素: ";
    for (const auto &element : myList)
    {
        std::cout << element << " ";
    }
    std::cout << "\n";

    return 0;
}
