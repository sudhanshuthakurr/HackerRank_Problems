#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,i,j,max=0,cnt;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)        {
        cnt=0;
        for(j=0;j<n;j++)
            {
            if(a[i]==a[j])
                cnt++; }
               if(cnt>max)
            max=cnt;
    }
    cout<<n-max;
  return 0;
}
