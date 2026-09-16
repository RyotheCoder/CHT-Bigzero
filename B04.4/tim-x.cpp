#include <bits/stdc++.h>
using namespace std;
int main () {
    long long n, a, b, m, bcnn, lcm;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        lcm=(a*b)/__gcd(a,b); // 8/1=8
        bcnn=0;
        for (long long i=1; bcnn <= a+b; i++) {
            bcnn=lcm * i;
        }
        cout << bcnn - (a+b) << endl;
    }
}
