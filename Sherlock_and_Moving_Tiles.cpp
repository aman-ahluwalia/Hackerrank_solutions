#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
     long double L,S1,S2;
    int Q;
    cin>>L>>S1>>S2>>Q;
    while(Q--) {
        long double instance;
        cin>>instance;
        instance = sqrt(2)*(L - sqrt(instance));
         long double speed = abs(S1-S2);
        //S1>S2 ? cout<<(long double)instance/(S1-S2) : cout<<(long double)instance/(S2-S1);
        cout<<setprecision(14)<<fixed<<instance/speed<<endl;
    }
    return 0;
}
