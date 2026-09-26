#include <bits/stdc++.h>
using namespace std;
int main () {
    long long n, ti=0, teo=0, x=0, y;
    cin >> n;
    y=n-1;
    long long a[n];
    for (long long i=0; i<n; i++) {
        cin >> a[i];
    }
    while (x <= y) {
        if (ti >= teo) {
            teo+=a[y];
            y--;
        } else {
            ti+=a[x];
            x++;
        }
    }
    cout << ti << "\n" << teo;
}
