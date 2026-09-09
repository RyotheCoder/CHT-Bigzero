#include <bits/stdc++.h>
using namespace std;
int main () {
    long long t, a, b, c, ax, bx, cx;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        ax = a/__gcd(a, c); 
        bx = b/__gcd(a,b); 
        cx = c/__gcd(b,c); 
        long long lcm_ab = (ax / __gcd(ax, bx)) * bx;
        cout << (lcm_ab / __gcd(lcm_ab, cx)) * cx << "\n";
    }
}
