#include <bits/stdc++.h>
using namespace std;
int main () {
    freopen("FASTSORT.INP", "r", stdin);
    freopen("FASTSORT.OUT", "w", stdout);
    long long n;
    cin >> n;
    long long a[n];
    for (long long i=0; i<n; i++) {
        cin >> a[i];
    }
    sort (a, a+n);
    for (long long i=0; i<n; i++) {
        cout << a[i] << " ";
    }
}
