#include <deque>
#include <iostream>
#include <string>

int main()
{
    std::deque<int> myQueue;
    std::string command;

    while (true)
    {
        std::cout << "请输入指令(push, pop, print, exit): ";
        std::cin >> command;

        if (command == "push")
        {
            int value;
            std::cout << "输入插入的值: ";
            std::cin >> value;
            myQueue.push_back(value);
            std::cout << value << " 插入了队列。\n";
        }
        else if (command == "pop")
        {
            if (!myQueue.empty())
            {
                int frontValue = myQueue.front();
                myQueue.pop_front();
                std::cout << frontValue << " 从队列中出队了。\n";
            }
            else
            {
                std::cout << "队列以空，无法出队。\n";
            }
        }
        else if (command == "print")
        {
            std::cout << "队列元素有: ";
            for (const auto &element : myQueue)
            {
                std::cout << element << " ";
            }
            std::cout << std::endl;
        }
        else if (command == "exit")
        {
            std::cout << "退出程序。\n";
            break; // Exit the loop
        }
        else
        {
            std::cout << "命令无效，请输入push, pop, print, or exit。\n";
        }
    }

    return 0;
}
