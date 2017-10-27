#include <bits/stdc++.h>

using namespace std;
int migratoryBirds(int n, vector <int> ar) {
    long long freq[6];
    for(int i=0;i<6;i++)
        freq[i] = 0;
    for(int i=0;i<n;i++){
        freq[ar[i]]++;
    }
    int max=0;
    for(int i=1;i<6;i++){
        if(freq[max]<freq[i])
            max = i;
    }
    return max;
    
}
int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}
