#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(long long int a, long long int b) {
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t>0) {
        long long int a,b,x,y;
        cin>>a>>b>>x>>y;
        if(gcd(a,b) == gcd(x,y))
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
        t--;
    }
    return 0;
}


