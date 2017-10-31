#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k,tmp,sum=0;
    cin >> n >> k;
    vector <int> v(k);
    for(int i=0;i<n;i++){
        cin >> tmp;
        tmp%=k;
        v[tmp]++;
    }
    sum+=(v[0]>0) ? 1 : 0;
    sum+=(k%2==0 && v[k/2]>0) ? 1 : 0;
    for(int i=1;i<static_cast<float>(k)/2;i++){
        sum+=max(v[i],v[k-i]);
    }
    cout << sum;
    return 0;
}
