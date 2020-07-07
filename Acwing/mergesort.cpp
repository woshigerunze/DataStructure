//
// Created by 葛润泽 on 2020/6/29.
//
#include <iostream>
#include <vector>
using namespace std;
int temp[100010];
void merge_sort(vector<int>& v,int l,int r)
{
    if(l>=r)return;
    int mid=l+r>>1;
    merge_sort(v,l,mid);
    merge_sort(v,mid+1,r);
    int i=l;
    int j=mid+1;
    int k=0;
    while(i<=mid&&j<=r)
        if(v[i]<=v[j])temp[k++]=v[i++];
        else temp[k++]=v[j++];
    while(i<=mid)temp[k++]=v[i++];
    while(j<=r)temp[k++]=v[j++];
    for(int i=l,j=0;i<=r;i++,j++)v[i]=temp[j];
}
int main()
{
    vector<int> res{2,3,5,1,3,6,4,5,342,125,56,123};
    merge_sort(res,0,res.size()-1);
    for(auto& elem : res)cout<<elem<<" ";
}
