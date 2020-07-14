//
// Created by 葛润泽 on 2020/7/14.
//
/*
 有 N件物品和一个容量是 V的背包。每件物品只能使用一次。

第 i 件物品的体积是 vi ，价值是 wi 。

求解将哪些物品装入背包，可使这些物品的总体积不超过背包容量，且总价值最大。
输出最大价值。

输入格式

第一行两个整数，N，V ，用空格隔开，分别表示物品数量和背包容积。

接下来有 N 行，每行两个整数 vi,wi ，用空格隔开，分别表示第 i 件物品的体积和价值。

输出格式

输出一个整数，表示最大价值。

数据范围

0<N,V≤1000

0<vi,wi≤1000

输入样例

4 5
1 2
2 4
3 4
4 5
输出样例：

8

 */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> weight{1,2,3,4};
    vector<int> value{2,4,4,5};
    int volume=5;//背包体积，自己填上
    vector<int> dp(volume+1,0);
    for(int i=0;i<weight.size();i++)
    {
        for (int j = volume+1; j >= 1; j--)
        {
            if (j >= weight[i])dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
        }
    }
    cout<<dp[volume]<<endl;//最终结果
}
