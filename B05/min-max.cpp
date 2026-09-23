#include <bits/stdc++.h>
using namespace std;
int main () {
    long long n, gmax, gmax2, gmin, gmin2;
    cin >> n;
    long long a[n];
    for (long long i=0; i<n; i++) {
        cin >> a[i];
        if (i==0) {
            gmax=a[i];
            gmax2=a[i];
            gmin=a[i];
            gmin2=a[i];
        } else {
            if (gmax<a[i]) {
                gmax=a[i];
            }
            if (gmin>a[i]) {
                gmin=a[i];
            }
        }
    }
    for (long long i=0; i<n; i++) {
        if (gmax2 < a[i] && a[i] < gmax || gmax == gmax2) {
            gmax2 = a[i];
        }
        if (gmin2 > a[i] && a[i] > gmin || gmin2 == gmin) {
            gmin2 = a[i];
        }
    }
    cout << gmax << " " << gmax2 << "\n" << gmin << " " << gmin2; 
}
