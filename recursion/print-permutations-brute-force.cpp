#include<bits/stdc++.h>
using namespace std;

// Brute force approach 
// TC: O(n! * n) , SC : O(n) + O(n) , due to the extra array and for the visited array

void helper(int ind,int vis[],vector<vector<int>>&ans,vector<int>&ds,vector<int>vec,int n){
    if(ds.size()==n){
        ans.push_back(ds);
        // ds.pop_back();
        return;
    }
    for(int i=ind;i<n;i++){
        if(!vis[i]){
            ds.push_back(vec[i]);
            vis[i]=1;
            helper(ind,vis,ans,ds,vec,n);
            ds.pop_back();
            vis[i]=0;
        }
    }
}

vector<vector<int>> permutations(vector<int> &vec, int size) {
    // Write your code here.
    int vis[size]={0};
    vector<vector<int>>ans;
    vector<int>ds;
    helper(0,vis,ans,ds,vec,size);
    return ans;
}


// without using extra space 
