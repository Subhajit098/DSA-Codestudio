#include<bits/stdc++.h>
using namespace std;

void dfs(int vis[],vector<int> adjLs[],int node){
        vis[node]=1;
        
        for(auto it:adjLs[node]){
            if(vis[it]!=1){
                dfs(vis,adjLs,it);
            }
        }
    }
    
    void convertIntoAdj(vector<vector<int>> adj,int V,vector<int> adjLs[]){
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(adj[i][j]==1 and i!=j) {
                    adjLs[i].push_back(j);
                    adjLs[j].push_back(i);
                }
            }
        }
    }
  
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        vector<int> adjLs[V];    
        convertIntoAdj(adj,V,adjLs);
        
        
       int  vis[V]={0};
        vis[0]=1;
        int count=0;
        for(int i=0;i<V;i++){
            if(vis[i]!=0){
                count++;
                dfs(vis,adjLs,i);
            }
        }
        return count;
    }