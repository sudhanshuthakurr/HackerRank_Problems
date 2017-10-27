#include <bits/stdc++.h>

using namespace std;

int solve(int n, int p){
int min=0;
    // Complete this function
min=(n/2)-(p/2);
if(min>p/2)
min=p/2;
//cout<<min;
return min;
}

int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}
