#include <bits/stdc++.h>
using namespace std;
int main () {
    long long m, n;
    cin >> m >> n;
    cout << (m+n) - __gcd(m, n);
}
