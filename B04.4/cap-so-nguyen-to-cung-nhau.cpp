#include <bits/stdc++.h>
using namespace std;
int main () {
    freopen("PAIRS.INP", "r", stdin);
    freopen("PAIRS.OUT", "w", stdout);
    long long n, s=0;
    cin >> n;
    long long a[n];
    for (long long i = 0; i<n; i++) {
        cin >> a[i];
    }
    long long i=0, j=1;
    while (i<n-1) {
        while (j<n) {
            if (__gcd(a[i], a[j]) == 1) {
                s+=1;
            }
            j++;
        }
        i+=1;
        j=i+1;
    }
    cout << s;
}
