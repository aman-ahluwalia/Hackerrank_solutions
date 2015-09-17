#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int r, c, rem;
    cin>>r>>c; //2,3
    r = r-1; //1
    rem = r%2; //1
    r = r/2; //0
    r = r*10; //0
    if(rem == 1) 
        r = r+1; // 1
    r = r + ((c-1) * 2); //5
    cout<<r<<endl;
    return 0;
}
