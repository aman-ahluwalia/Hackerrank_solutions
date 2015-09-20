#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    while(t--) {
        long long unsigned int i,seq,n, res=1,mod=100000;
        cin>>n;
        seq = 1;
    for(i=1; i<n; i++) {
        seq *= 2;
        seq %= mod;
        res += seq;
        res %= mod;
}
        cout<<res<<endl;
    }
    return 0;
}
