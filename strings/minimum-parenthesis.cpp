#include <bits/stdc++.h> 
using namespace std;
int minimumParentheses(string pattern) {
    // Write your code here.
    // pattern is the given string.
    int n=pattern.size();
    stack<char>st;
    for(int i=0;i<n;i++){
        if(st.size()>0 and st.top()=='(' and pattern[i]==')') {
            st.pop();
            continue;
        }
        else st.push(pattern[i]);
    }
    return st.size();
}