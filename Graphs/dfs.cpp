#include<bits/stdc++.h>
using namespace std;

void helper(int vis[],vector<int>adj[],vector<int>&dfs,int node){
        vis[node]=1;
        dfs.push_back(node);
        
        for(auto it:adj[node]){
            if(vis[it]!=1){
                helper(vis,adj,dfs,it);
            }
        }
    }
    
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>dfs;
        int vis[V]={0};
        helper(vis,adj,dfs,0);
        return dfs;
    }