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
    cin >> n;
    vector<int> v(n);
    map<int, int> m;
    int min = INT_MAX;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        if(m.find(v[i]) != m.end()) {
            int temp = i - m[v[i]];
            if(temp < min)
                min = temp;
            m[v[i]] = i;
        } else 
            m[v[i]] = i;
        
    }
    cout << (min == INT_MAX? -1 : min);
    return 0;
}
