#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
    stack<int> mystack;
    int n, x;
    cin>>n;

   for (int i = 0; i < n; i++) {
        int q;
        scanf("%d", &q);

        switch (q)
        {
        case 1:
            scanf("%d", &x);

            if (mystack.empty()) {
                mystack.push(x);
            }
            else {
                mystack.push(max(x, mystack.top()));
            }
            break;

        case 2:
            if (!mystack.empty()) {
                mystack.pop();
            }
            break;

        case 3:
            printf("%d\n", mystack.top());
            break;

        default:
            break;
        }
    }

    return 0;
}
