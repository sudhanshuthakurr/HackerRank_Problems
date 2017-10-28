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
    char* s = (char *)malloc(512000 * sizeof(char));
    cin>>s;
    char* t = (char *)malloc(512000 * sizeof(char));
    cin>>t;
    int k; 
    cin>>k;
    int i = 0;
    while(s[i]==t[i]){
        i++;
    }
    int sl=strlen(s), tl=strlen(t);
    int diff=k-sl-tl+2*i;
    if(diff<0){
        printf("No");
    }
    else if(diff<=2*i){
        if(diff%2!=0){
            printf("No");
        }
        else{
            printf("Yes");
        }
    }
    else{
        printf("Yes");
    }
    return 0;
}
