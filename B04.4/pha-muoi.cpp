#include <bits/stdc++.h>
using namespace std;
int main () {
    long long a, b, c, x, y, k;
    cin >> a >> b >> c;
    y = (a-c);
    x = (c-b);
    k = __gcd(x,y);
    y /= k;
    x /= k;
    if (a==b || b==c) {
        cout << 1;
    } else if (a < c && b < c) {
        cout << 0;
    } else if (x==0) {

    } else if (x+y <= -1) {
        cout << 0;
    } else {
        cout << x + y;
    }
}
