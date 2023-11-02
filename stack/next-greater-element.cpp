#include <bits/stdc++.h> 
using namespace std;


vector<int> nextGreater(vector<int> &arr, int n) {
    // Write your code here
    stack<int>st;
    vector<int>ans(arr);
    for(int i=n-1;i>=0;i--){
        if(st.empty()){
            ans[i]=-1;
            st.push(arr[i]);
        }


        if(arr[i]<st.top()){
            ans[i]=st.top();
            st.push(arr[i]);
        }

         else {        
             while(!st.empty()&&st.top()<=arr[i]){     
                        st.pop();       
                }       
                 if(st.empty()){   
                    ans[i]=-1;  
                     st.push(arr[i]); 
                 }
                 else {    
                 ans[i]=st.top();       
                  st.push(arr[i]); 
                    }    
            }    
    
    }
    // reverse(ans.begin(),ans.end());
    return ans;
}