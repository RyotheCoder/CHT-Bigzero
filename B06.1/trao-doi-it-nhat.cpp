#include <bits/stdc++.h>
using namespace std;
int main () {
    freopen("SWMIN.INP", "r", stdin);
    freopen("SWMIN.OUT", "w", stdout);
    long long n, x=0, y=0;
    cin >> n;
    long long a[n];
    for (long long i=0; i<n; i++) {
        cin >> a[i];
        if (a[i] % 2 != 0) {
            x+=1;
        }
    }
    for (long long i=0; i<x; i++) {
        if (a[i] % 2 == 0) {
            y+=1;
        }
    }
    cout << y;
}
