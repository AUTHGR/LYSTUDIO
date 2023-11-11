#include <iostream>
#include <cstdio>		
#include <cstring>
using namespace std;
const int N = 8;	
int n = 8,a[N + 5];		                            //表示皇后摆放的位置
bool col[N + 5],vis[2 * N + 5],vis2[2 * N + 5];     //定义列，斜线，反斜线
void put(int s);                                    
int total,ans[100];	                                //写入数组ans 
 
int main()
{
	put(1);			                                //搜索8皇后，解存入数组ans 
	int T;
	cin >> T; 
	while(T--){
		int x;
		cin >> x;
		cout << ans[x] << endl;
	}
	return 0;
} 
 
//从第s行开始放皇后 
void put(int s)
{
	//到达第n+1行（盒子）,表示放完了，输出当前方案
	if(s == n + 1){
    	total++;
    	int t = 0;
 		for(int i = 1;i <= n;i++){
			t = t * 10 + a[i];	
		} 
		ans[total] = t;
		return;
	} 
	//枚举所有的列（手里的牌） 
	for(int i = 1;i <= n;i++){
		//如果当前列（i列）不冲突的话
		if(!col[i] && !vis[s + i] && !vis2[s - i + n]){
			a[s] = i;		//第s行的皇后放在第i列 
			col[i] = true;	//增加列约束 
			vis[s + i] = true;		//增加斜线约束 
			vis2[s - i + n] = true;	//增加反斜线约束 
			put(s + 1);			//继续放下一行 
			//回溯，解除约束 
			col[i] = false;	//增加列约束 
			vis[s + i] = false;		//增加斜线约束 
			vis2[s - i + n] = false;	//增加反斜线约束 
		}		
	} 	
}
 