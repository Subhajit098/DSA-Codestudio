#include<bits/stdc++.h>
using namespace std;

void helper(string &str,int n,vector<string>&ans,int ind){
    if(ind==n){
        ans.push_back(str);
        return;
    }

    for(int i=ind;i<n;i++){
        swap(str[i],str[ind]);
        helper(str, n, ans, ind+1);
        swap(str[i],str[ind]);
    }

}

vector<string> generatePermutations(string &str)
{
    // write your code here
    vector<string>ans;
    int n=str.size();
    helper(str,n,ans,0);
    sort(ans.begin(),ans.end());
    return ans;
}