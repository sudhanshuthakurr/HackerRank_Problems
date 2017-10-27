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
int main() {
    int n;
    cin>>n;
    int p[n+1];
    for(int i=1;i<=n;i++){
        int k;
        cin>>k;
        p[k]=i;
    }
    for(int i=1;i<=n;i++)
        cout<<p[p[i]]<<endl;
    return 0;
}
