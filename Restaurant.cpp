#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int gcd(long long int a, long long int b) {
    if(b == 0)
        return a;
    return gcd(b, a%b);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    while(t--) {
        long long int l,b;
        cin>>l>>b;
        long long int i, mul=l*b;
        i = gcd(l,b);
        for(; i>0; i--){
            if(mul%(i*i)==0)
                break;
        }
        cout<<mul/(i*i);
        cout<<endl;
    }
    return 0;
}
