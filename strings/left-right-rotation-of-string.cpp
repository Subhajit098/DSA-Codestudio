#include <bits/stdc++.h> 
using namespace std;

string leftRotate(string str, int d) {
    // Write your code here.
    int n = str.length() ;

    d = d % n ;

    return str.substr(d) + str.substr(0 , d) ;
}

string rightRotate(string str, int d) {
    // Write your code here.
      int n = str.length() ;

    d = d % n ;

    return str.substr(n - d) + str.substr(0 , n - d) ;
}