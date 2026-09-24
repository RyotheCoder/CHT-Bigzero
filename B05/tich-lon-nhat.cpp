#include <bits/stdc++.h>
using namespace std;
int main () {
    freopen("MAXPROD.INP", "r", stdin);
    freopen("MAXPROD.OUT", "w", stdout);
    long long n, gmax, gmin, gmax2, gmin2, maxi, mini, maxi2, mini2;
    cin >> n;
    long long a[n];
    for (long long i=0; i<n; i++) {
        cin >> a[i];
        if (i==0) {
            gmax=a[i];
            maxi=i;
            gmin=a[i];
            mini=i;
        } else {
            if (gmax < a[i]) {
                gmax=a[i];
                maxi=i;
            }
            if (gmin > a[i]) {
                gmin=a[i];
                mini=i;
            }
        }
    }
    for (long long i=0; i<n; i++) {
        if (i==0) {
            gmax2=a[i];
            maxi2=i;
            gmin2=a[i];
            mini2=i;
        } else {
            if (a[i] > gmax2 && i != maxi || maxi==maxi2) {
                gmax2 = a[i];
                maxi2 = i;
            }
            if (a[i] < gmin2 && i != mini || mini==mini2) {
                gmin2 = a[i];
                mini2 = i;
            }
        }
    }
    if ((gmax2*gmax) >= (gmin2*gmin)) {
        cout << gmax2*gmax;
    } else {
        cout << gmin2*gmin;
    }
}
