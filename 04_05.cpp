 #include<iostream>
using namespace std;
struct as{                                            //构造结构体函数
    char st[20];
    int c;
    int j;
    char a;
    char b;
    int d;
    int total=0;
}ss[1003];
int main()                                              //构造主函数
{
    int n,p,q,sum=0;
    cin>>n;                                          
    for(int i=1;i<=n;i++)                               //利用for循环，根据t的值循决定循环输入次数
    {
        cin>>ss[i].st;                                  //存储数据
        cin>>ss[i].c;
        cin>>ss[i].j;
        cin>>ss[i].a;
        cin>>ss[i].b;
        cin>>ss[i].d;
        if(ss[i].d>=1&&ss[i].c>80)ss[i].total+=8000;    //根据数据判断是否符合条件，并输出值
        if(ss[i].c>85&&ss[i].j>80)ss[i].total+=4000;
        if(ss[i].c>90)ss[i].total+=2000;
        if(ss[i].c>85&&ss[i].b=='Y') ss[i].total+=1000;
        if(ss[i].j>80&&ss[i].a=='Y') ss[i].total+=850;
    }
    p=ss[1].total;                                      //将第一个学生的总分数赋值给变量p，作为当前最大总分数
    for(int i=1;i<=n;i++)                               //循环遍历所有学生分数,找出分数做多的学生
    {  
        if(ss[i].total>p)
        {
            p=ss[i].total;
            q=i;
        }
        sum+=ss[i].total;                              //计算学生总分数
    }
    cout<<ss[q].st<<endl<<p<<endl<<sum; 
    return 0; 
}