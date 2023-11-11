#include<iostream>
using namespace std;
int main()
{
	int	n, m;                           
	cin >> n >> m;
	int drop = 0;                                      
	int num = 0;
	int monkey[300] = { 0 };                      //将包含300个元素的整数数组初始化为0
	while (n != 0)
	{
		for (int i = 0; i < n; i++)
		{
			if (monkey[i] != -1)
			{
				num++;
				monkey[i] = num;
				if (monkey[i] == m)
				{
					monkey[i] = -1;
					num = 0;                      //重置编号为0
					drop += 1;                    
					for (int j = 0; j < n; j++)
					{
						if (monkey[j] != -1)
						{
							monkey[j] = 0;
						}
					}
				}
			}
			if (drop!= n - 1&&i==n-1)
			{
				i = -1;                          //循环变量i重置为-1，相当于重新开始循环
			}
			if (drop==n-1)
			{
				for (int k = 0; k < n; k++)
				{
					if (monkey[k]!=-1)
					{
						cout << k + 1 << endl;
						break;
					}
				}
				break;
			}
		}

		for (int l = 0; l < n; l++)
		{
			monkey[l] = 0;
		}
		cin >> n >> m;
		drop = 0; num = 0;                       //重置猴子数量和编号为0
	}
	system("pause");
}
 