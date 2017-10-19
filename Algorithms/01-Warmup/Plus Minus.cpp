#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int N; cin >> N;
double Pos = 0.0,Neg = 0.0,Zero = 0.0;
int index = 0, num = 0;
while (index++ < N && cin >> num)
{
    Pos += (num > 0);
    Neg+= (num < 0);
    Zero += (num == 0);
}

printf("%.3f\n", Pos/N);
printf("%.3f\n", Neg/N);
printf("%.3f", Zero/N);
return 0;

}
