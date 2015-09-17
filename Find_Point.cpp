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
    while(t-->0) {
        int px, py, qx, qy, sx, sy;
        cin>>px>>py>>qx>>qy;
        px>qx ? sx=qx-(px-qx) : sx=qx+(qx-px);
        py>qy ? sy=qy-(py-qy) : sy=qy+(qy-py);
        cout<<sx<<" "<<sy<<endl;
    }
    return 0;
}
