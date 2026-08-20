#include <bits/stdc++.h>
using namespace std;
int main () {
    long long a, b, c, d, x, y;
    cin >> a >> b >> c >> d;
    y=(b * d) / __gcd(b, d);
    x = a * (d / __gcd(b,d)) + c * (b / __gcd(b,d));
    cout << x / (__gcd(x, y)) << " " << y / (__gcd(x, y));
}
