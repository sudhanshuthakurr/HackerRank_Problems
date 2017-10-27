#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int count=0,n;
    cin>>n;
    char arr[n];    
    for(int j=0;j<n;j++)
    cin>>arr[j];
    int final=0;
    for(int i=0;i<n;i++){
        if(arr[i]=='D'){
            count--;
        }
        if(arr[i]=='U'){
            count++;
            if(!count){
                final++;
            }
        } 
    }
    cout<<final<<endl;
    return 0;
}
