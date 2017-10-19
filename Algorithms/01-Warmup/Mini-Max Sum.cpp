#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> arr(5);
    long sum=0;
    
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
        sum+=arr[arr_i];
    }
    long min_sum=sum-arr[4];
    long max_sum=sum-arr[4];
    for(int i=0;i<4;i++){
        if(sum-arr[i]<min_sum)
            min_sum=sum-arr[i];
        if(sum-arr[i]>max_sum)
            max_sum=sum-arr[i];
        
    }
    cout<< min_sum<<" "<<max_sum;
    return 0;
}
