#include<bits/stdc++.h>
using namespace std;

char firstNonRepeatingCharacter(string str) {

  // Write your code here
  unordered_map<char,int>mp;
  int n=str.size();
  for(char c:str) mp[c]++;

  char c=str[0];
  for(int i=0;i<n;i++){
    if(mp[str[i]]==1) {
      c=str[i];
      break;
    }
  }

  return c;
}