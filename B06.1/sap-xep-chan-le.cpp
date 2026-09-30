#include <bits/stdc++.h>
using namespace std;
int main () {
    freopen("SORTF.INP", "r", stdin);
    freopen("SORTF.OUT", "w", stdout);
    long long n, x=0, y=0;
    cin >> n;
    long long a[n];
    long long c[100001];
    long long l[100001];
    for (long long i=0; i<n; i++) {
        cin >> a[i];
        if (a[i] % 2 ==0) {
            c[x]=a[i];
            x++;
        } else {
            l[y]=a[i];
            y++;
        }
    }
    sort(c, c+x);
    sort(l, l+y);
    for (long long i=0; i<x; i++) {
        cout <<  c[i] << " ";
    }
    for (long long i=y-1; i>=0; i--) {
        cout << l[i] << " ";
    }
}
