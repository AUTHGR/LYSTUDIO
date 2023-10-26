#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));  // 设置随机种子

    bool again = true;//定义布尔

    while (again) {
        cout << "请选择你的手势：" << endl;
        cout << "剪刀 (数字1)" << endl;
        cout << "石头（数字2）" << endl;
        cout << "布（数字3）" << endl;

        int playerChoice;
        cout << "你的选择: ";
        cin >> playerChoice;

        int computerChoice = rand() % 3 + 1;

        cout << "电脑选择了: " << computerChoice << endl;

        // 判断胜负
        if (playerChoice == computerChoice) {
            cout << "平局！" << endl;
        } else {
            switch (playerChoice) {
                case 1:  // 玩家选择剪刀的情况
                    if (computerChoice == 2) {
                        cout << "你输了！" << endl;
                    } else {
                        cout << "你赢了！" << endl;
                    }
                    break;
                case 2:  // 玩家选择石头的情况
                    if (computerChoice == 3) {
                        cout << "你输了！" << endl;
                    } else {
                        cout << "你赢了！" << endl;
                    }
                    break;
                case 3:  // 玩家选择布的情况
                    if (computerChoice == 1) {
                        cout << "你输了！" << endl;
                    } else {
                        cout << "你赢了！" << endl;
                    }
                    break;
                default:
                    cout << "无效的选择！" << endl;
                    break;
            }
        }

        // 询问是否重玩
        char playAgainChoice;
        cout << "是否要重玩？(y/n): ";
        cin >> playAgainChoice;

        if (playAgainChoice == 'n') {
            again = false;
        }

        cout << endl;
    }

    cout << "游戏结束!" << endl;

    return 0;
}
