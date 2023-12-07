#include<bits/stdc++.h>
using namespace std;



bool func(vector<int>num,int ind,int sum,int k){

  // base case
    if(sum>k) return false;

    if(ind==num.size()){
        if(sum==k) return true;
        return false;
    }

    sum+=num[ind];
    if(func(num,ind+1,sum,k))
    return true;

    sum-=num[ind];
    if(func(num,ind+1,sum,k))
    return true;

    return false;
}

bool isSubsetPresent(int n, int k, vector<int> &a)
{
    // Write your code here
    bool ans=func(a, 0, 0, k);
    return ans;
}