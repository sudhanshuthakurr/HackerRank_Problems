#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        int t=0,w=0,l=0;
        cin >> n >> c >> m;
        t=n/c;
        w=n/c;
        while(w>=m)
        {
            t+=w/m;
            w=(w/m) + (w%m);
        }
        cout<<t<<endl;
    }
    return 0;
}
