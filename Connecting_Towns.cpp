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
        int N,i;
        cin>>N;
        long long int TotalRoutes = 1;
        for(i=1;i<N;i++) {
            long long int routes;
            cin>>routes;
            TotalRoutes *= routes;
            TotalRoutes = TotalRoutes%1234567;
        }
        cout<<TotalRoutes<<endl;
    }
    return 0;
}


