#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long int t;
    cin>>t;
    while(t--) {
        long long int n, count=0, div=1;
        cin>>n;
        if(n%2 != 0){
            cout<<"0"<<endl;
            continue;
        }
        while(div*div < n) {
            if(n%div == 0) {
                if(div%2 == 0)
                    count++;
                if((n/div)%2 == 0)
                    count++;
            }
            div++;
        }
        if(div*div == n && div%2==0)
            count++;
        cout<<count<<endl;
    }
    return 0;
}
