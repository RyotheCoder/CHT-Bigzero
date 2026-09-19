#include <bits/stdc++.h>
using namespace std;
int main () {
    freopen ("SECONDMAX.INP", "r", stdin);
    freopen ("SECONDMAX.OUT", "w", stdout);
    long long n, gmax=0, g2=-1;
    cin >> n;
    long long a[n];
    for (long long i=0; i<n; i++) {
        cin >> a[i];
        if (i==0) {
            gmax=a[i];
        }
        if (a[i] > gmax) {
            gmax = a[i];
        }
    }
    for (long long i=0; i<n; i++) {
         if (i==0) {
            g2=a[i];
        }
        if (a[i] < gmax && (g2 < a[i] || g2 == gmax)) {
            g2 = a[i];
        }
    }
    if (gmax == g2) {
        cout << 0;
    } else {
        cout << g2 << endl;
        for (long long i=0; i<n; i++) {
            if (a[i] == g2) {
                cout << i + 1 << " ";
            }
        }
    }
}
