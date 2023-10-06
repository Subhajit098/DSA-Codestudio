#include <bits/stdc++.h> 
using namespace std;
string encode(string &message)
{
    //   Write your code here.
    int n=message.length();
    string new_str;
    int count=1;

    for(int i=0; i<message.length(); i++){
        if(message[i] == message[i+1]){
            count++;
        }
        else{
            new_str += message[i];
            new_str += to_string(count);
            count=1;
        }
    }
    return new_str;
}