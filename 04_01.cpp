#include <iostream>
using namespace std;

void hanoi(int n, char source, char destination, char auxiliary) {   //定义四个形参
    if (n == 1) {
        cout << n << ":" << source << "->" << destination << endl;
        return;
    }
    hanoi(n-1, source, auxiliary, destination);                      //交换形参位置，再赋予hanoi函数，一直递归至n = 1的情况
    cout <<  n << ":" << source <<  "->"  << destination << endl;    
    hanoi(n-1, auxiliary, destination, source);
}

int main() {
    int numDisks;
	char source;
	char auxiliary;
	char destination;
    cin >> numDisks;
	cin >> source;
	cin >> auxiliary;
	cin >> destination;
    hanoi(numDisks, source, destination, auxiliary);                  //在主函数中调用hanoi函数
    
    return 0;
}
