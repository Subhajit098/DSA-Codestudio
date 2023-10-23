#include<bits/stdc++.h>
using namespace std;

static bool cmp(pair<int,int>a,pair<int,int>b){
        return a.second<b.second;
    }
    
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        // Your code here
        vector<pair<int,int>>p_arr;
        for(int i=0;i<n;i++){
            pair<int,int>p=make_pair(start[i],end[i]);
            p_arr.push_back(p);
        }
        sort(p_arr.begin(),p_arr.end(),cmp);
        int count=1;
        int back=p_arr[0].second;
        for(int i=1;i<n;i++){
            if(back<p_arr[i].first) {
                count++;
                back=p_arr[i].second;
            }
        }
        return count;
    }