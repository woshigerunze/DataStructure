//
// Created by 葛润泽 on 2020/7/14.
//
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> weight{1,2,3,4};
    vector<int> value{2,4,4,5};
    int volume=6;
    vector<int> dp(volume+1,0);
    for(int i=0;i<weight.size();i++)
    {
        for(int j=weight[i];j<=volume;j++) {
            dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
        }
    }
}

