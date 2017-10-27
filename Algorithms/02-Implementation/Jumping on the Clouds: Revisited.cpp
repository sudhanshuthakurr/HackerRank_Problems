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

int main(){
    int n;
    int k;
    int fe=100;
    cin >> n >> k;
    vector<int>c(n);
    for(int i = 0;i < n;i++){
       cin >> c[i];
    }
    for(int i=0;i<n;i+=k)
    {
        if(c[i]==1)
        {
             fe=fe-1-2;
        }
        else if(c[i]==0)
        {
            fe=fe-1;
        }
    }
    cout<<fe<<endl;
    return 0;
}
