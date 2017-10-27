#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() 
{
    int i, n, k, maxk = 0, max = 0;
    cin >> n;
    int a[100]={0};      
    for(int i = 0;i<n;i++)
    {
        cin>>k;
        if(k > maxk)
            maxk = k;
        a[k]++;          
    }
    
    for(i=0;i<maxk;i++)
        if(a[i]+a[i+1]> max) 
            max = a[i]+a[i+1];
    
    cout<<max;
    return 0;
}
