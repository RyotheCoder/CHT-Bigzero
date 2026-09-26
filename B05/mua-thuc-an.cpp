#include <bits/stdc++.h>
using namespace std;
int main () {
    freopen("FEEDING.INP", "r", stdin);
    freopen("FEEDING.OUT", "w", stdout);
    long long n, gmin, cnt=0;
    cin >> n;
    long long a[n];
    long long p[n];
    for (long long i=0; i<n; i++) {
        cin >> a[i];
    }
    for (long long i=0; i<n; i++) {
        cin >> p[i];
    }
    for (long long i=0; i<n; i++) {
        if (i==0) {
            gmin=p[i];
        } else if (gmin > p[i]) {
            gmin=p[i];
        }
        cnt+=a[i]*gmin;
    }
    cout << cnt;
}
