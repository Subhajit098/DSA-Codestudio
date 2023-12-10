#include<bits/stdc++.h>
using namespace std;

int partitionArray(int input[], int start, int end) {
	// Write your code here
	// 5 , 2 , 9 ->pivot
	int i=start,j=end,pivot=start;
	while(i<j){
		while(input[i]<=input[pivot] && i<=end-1) i++;

		while(input[j]>input[pivot] && j>=start+1) j--;

		if(i<j) swap(input[i],input[j]); // 2,5,9
	}

	swap(input[pivot],input[j]);

	return j;
}

void quickSort(int input[], int start, int end) {
	/*
		Don't write main().
		Don't read input, it is passed as function argument.
		Change in the given array itself.
		Taking input and printing output is handled automatically.
	*/
	if(start<end){
		int p=partitionArray(input, start, end);
		quickSort(input, start, p-1);
		quickSort(input, p+1, end);
	}
}