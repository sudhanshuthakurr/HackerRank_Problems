#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    int count = 1;
    sort(ar.begin(), ar.end());
    reverse(ar.begin(), ar.end());
    for (int i = 0; i < n; i++){
        if (ar[i] == ar[i+1]){
            count++;
        }
        else
            break;
   }
    return count;
}
int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}
