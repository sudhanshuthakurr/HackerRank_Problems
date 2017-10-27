#include <iostream>

using namespace std;

int main()
{
    int n, k, hurdle, max_hurdle = 1;
    cin >> n >> k;
    while(cin >> hurdle)
       if(hurdle > max_hurdle)
          max_hurdle = hurdle;
    
    cout << (max_hurdle - k >= 0 ? max_hurdle - k : 0) << endl;    
    
    return 0;
}
