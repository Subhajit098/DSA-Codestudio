#include<bits/stdc++.h>
using namespace std;

int maxIncreasingDumbbellsSum(vector<int> &rack, int n)
{
	// Write your code here
	int dp[n];
	    for(int i=0;i<n;i++) dp[i]=rack[i];
	    
	    for(int i=1;i<n;i++){
	        for(int j=0;j<i;j++){
	            if(rack[i]>rack[j] && rack[i]+dp[j]>dp[i]) dp[i]=dp[j]+rack[i];
	        }
	    }
	    return *max_element(dp,dp+n);
}