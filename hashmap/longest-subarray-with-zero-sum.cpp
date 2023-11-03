#include<bits/stdc++.h>
using namespace std;

int getLongestZeroSumSubarrayLength(vector<int> &arr){
	// Write your code here.
	unordered_map<int,int>mp;
	int sum=0;
	int n=arr.size();
	int maxi=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
		if(sum==0) maxi=max(maxi,i+1);

		if(mp.find(sum)!=mp.end()) {
			maxi=max(maxi,i-mp[sum]);
		}

		else{
			mp[sum]=i;
		}
	}

	return maxi;
}