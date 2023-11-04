#include<bits/stdc++.h>
using namespace std;


int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int l=0,r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==k) return mid;
        else if(arr[mid]<=arr[r]){
            if(k>=arr[mid] && k<=arr[r] ) l=mid+1;
            else r=mid-1;;
        }
        else {
            if(k>=arr[r] && k<=arr[mid]) r=mid-1;
            else l=mid+1;
        }
    }
    return -1;
}