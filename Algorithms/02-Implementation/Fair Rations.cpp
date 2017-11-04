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
    int N;
    cin >> N;
    //vector<int> B(N);
    //for(int B_i = 0;B_i < N;B_i++)
   //    cin >> B[B_i];
int loaves = 0;
int carry = 0;
while ( N-- ) {
    int i;
    cin >> i;
    if ( (carry + i)%2 ) {
        loaves += 2;
        carry = 1;
    } else
        carry = 0;
}
if ( carry )
    cout << "NO" << endl;
else
    cout << loaves << endl;
    return 0;
}
