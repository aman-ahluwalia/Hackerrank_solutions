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
        int i, j, k, n, find, arr[100000], res[100000];
        cin>>n>>find;
        for(i=0; i<n; i++) {
            arr[i] = i;
        }
        j = (n-1)/2;
        k = 0;
        for(i=0; i<=j; i++) {
            res[k++] = arr[n-i-1];
            res[k++] = arr[i];
        }
        for(i=0; i<n; i++) {
            if(res[i] == find)
                break;
        }
        cout<<i<<endl;
    }
    return 0;
}
