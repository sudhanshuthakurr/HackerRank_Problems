#include <bits/stdc++.h>

int main(){
int n1;
int n2;
int n3;
cin >> n1 >> n2 >> n3;
vector<int> h1(n1);
for(int h1_i = 0;h1_i < n1;h1_i++){
   cin >> h1[h1_i];
}
vector<int> h2(n2);
for(int h2_i = 0;h2_i < n2;h2_i++){
   cin >> h2[h2_i];
}
vector<int> h3(n3);
for(int h3_i = 0;h3_i < n3;h3_i++){
   cin >> h3[h3_i];
}

int h1sum, h2sum, h3sum;
h1sum=0;
h2sum=0;
h3sum=0;

for(int i1=0; i1<n1; i1++)
    {
    h1sum+=h1[i1];
}

for(int i2=0; i2<n2; i2++)
    {
    h2sum+=h2[i2];
}

for(int i3=0; i3<n3; i3++)
    {
    h3sum+=h3[i3];
}

int a=0;
int b=0;
int c=0;

while(h1sum != h2sum || h1sum != h3sum || h2sum != h3sum)
    {
    if(h1sum>h2sum && h1sum>h3sum || h1sum==h2sum && h1sum>h3sum || h1sum>h2sum && h1sum==h3sum)
        {
        h1sum-=h1[a];
        a++;
    }

    if(h2sum>h3sum && h2sum>h1sum || h2sum==h3sum && h2sum>h1sum || h2sum==h1sum && h2sum>h3sum)
        {
        h2sum-=h2[b];
        b++;
    }

    if(h3sum>h2sum && h3sum>h1sum || h3sum==h2sum && h3sum>h1sum || h3sum==h1sum && h3sum>h2sum)
        {
        h3sum-=h3[c];
        c++;
    }
}

cout <<h1sum;

return 0;
}