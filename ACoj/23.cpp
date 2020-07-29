//
// Created by 葛润泽 on 2020/7/30.
//
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool dfs(vector<vector<char>>& matrix,int index,int x,int y,string target)
    {
        //cout<<x<<" "<<y<<" "<<index<<endl;
        if(matrix[x][y]!=target[index-1])return false;
        if(index==target.size())return true;
        char t=matrix[x][y];
        matrix[x][y]='*';
        int dx[4]{-1,0,1,0};
        int dy[4]{0,1,0,-1};
        for(int i=0;i<4;i++)
        {
            int a = x + dx[i], b = y + dy[i];
            if (a >= 0 && a < matrix.size() && b >= 0 && b < matrix[a].size())
            {
                if(dfs(matrix,index+1,a,b,target))return true;
            }
        }
        matrix[x][y]=t;
        return false;
    }
    bool hasPath(vector<vector<char>>& matrix, string &str) {
        for (int i = 0; i < matrix.size(); i ++ )
            for (int j = 0; j < matrix[i].size(); j ++ )
                if (dfs(matrix,1,i,j,str))
                    return true;
        return false;
    }
};