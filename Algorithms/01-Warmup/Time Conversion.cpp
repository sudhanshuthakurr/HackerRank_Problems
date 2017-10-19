#include <bits/stdc++.h>

using namespace std;

int main(){
    string time;
    cin >> time;
    int hr = stoi(time.substr(0, 2));
    if(time.find("PM")!=string::npos){     
        time.replace(0,2,to_string(hr<12?hr+12:hr));
    }
    else if(hr==12){
        time.replace(0,2,"00");
    }
         
    cout<<time.substr(0, 8);
    return 0;
}
