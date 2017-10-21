#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int min_b = 100;
    int m;
    int factor = 0;
    int max_a = 0;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
       if( a[a_i] > max_a ) max_a = a[a_i];   
    }
   
    vector<int> b(m);
    for(int b_i = 0;b_i < m;b_i++){
       cin >> b[b_i];
        if(b[b_i] < min_b) min_b = b[b_i];
    }
   
   for(int i = 1; i <= min_b/max_a ;++i )
   {
        int sum = 0;
    for (int j = 0; j < n;j++)
        sum +=(i*max_a)%a[j];
   for(int k = 0; k <m ;k++)
       sum +=b[k]%(i*max_a);
       if(sum == 0)
        ++factor;
   }
     
    cout <<factor; 
    return 0;

}
