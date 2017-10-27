#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,m=5;
    int ppl=0;
    int tppl=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ppl=(m/2);
        tppl=tppl+ppl;
        m=ppl*3;
    }
    cout<<tppl;
    return 0;
}
