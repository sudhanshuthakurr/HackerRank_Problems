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
    int H[26];
    for(int i = 0; i < 26; ++i)
       cin >> H[i];

    string word;
    cin >> word;
    
    int big_h = 0;
    for(char i : word)
        if(H[(int)i-97] > big_h) big_h = H[(int)i-97];
    
    cout << big_h * word.size() << endl;
    
    return 0;
}
