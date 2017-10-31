#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int m;
    int max=0;
    cin >> n >> m;
    vector<string> topic(n);
    for(int topic_i = 0;topic_i < n;topic_i++)
    {
       cin >> topic[topic_i];
    }

    int count = 0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int topics = 0;
            for(int k=0;k<m;k++)
            {
              if( topic[i][k] =='1' || topic[j][k] == '1' )
                    topics++;
            }
            if(topics>max)
            {    
                max=topics;
                count = 1;
            }
            else if(topics==max)
                count++;
        }    
    }
   cout<<max<<endl<<count<<endl;
   return 0;
}
