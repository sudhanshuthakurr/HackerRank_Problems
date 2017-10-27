#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
    int growth, j;
    growth = j = 1;
        
    for(int i = 1; i <= n;i++){
        if((i%2)== 0){
            growth = growth * 2 + 1;
            j++;
        }
    }
    if((n%2)!= 0){
        growth = growth * 2;
    }
    if(!n){
        cout<< 1;
    }else{
        cout<<growth<<endl;
    }
    }

    return 0;
}
