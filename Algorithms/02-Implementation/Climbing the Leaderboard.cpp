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
    int i, n, m, score, top, stack[200002];
    cin>>n;
    for (i = 0; i < n; i++) {
        cin>>stack[top+1];
        if (stack[top+1] != stack[top]) 
            ++top;
    }
    cin>>m;
    for (i = 0; i < m; ++i) {
        cin>>score;
        while (top && score >= stack[top])
            --top;
        cout<<top+1<<endl;
    }
    return 0;
}

