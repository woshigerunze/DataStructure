#include <iostream>
#include <vector>
using namespace std;
void quicksort(vector<int>& v,int left,int right)
{
    if(left>=right)return;
    int i=left;
    int j=right;
    int pivot=v[left+right>>1];
    while(true)
    {
        while(v[i]<pivot)i++;
        while(v[j]>pivot)j--;
        if(i<j)swap(v[i++],v[j--]);
        else break;
    }
    quicksort(v,left,j);
    quicksort(v,j+1,right);
}
int main()
{
    vector<int> a{1,2,5,2,6,78,9,32,3,5,8};
    quicksort(a,0,a.size()-1);
    for(auto elem : a)cout<<elem<<" ";
}
