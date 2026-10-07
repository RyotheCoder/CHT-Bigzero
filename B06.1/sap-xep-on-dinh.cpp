#include <bits/stdc++.h>
using namespace std;
int main () {
    freopen("STABLE.INP", "r", stdin);
    freopen("STABLE.OUT", "w", stdout);
    long long n;
    cin >> n;
    pair <long long, long long> a[n];
    for (long long i=0; i<n; i++) {
        cin >> a[i].first;
        a[i].second=i;
    }
    sort(a, a+n);
    for (long long i=0; i<n; i++) {
        cout << a[i].second + 1 << " ";
    }
}
