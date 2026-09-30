#include <bits/stdc++.h>
using namespace std;
int main () {
    long long n, m;
    cin >> n >> m;
    long long a[m+n];
    for (long long i=0; i< m+n; i++) {
        cin >> a[i];
    }
    sort(a, a+m+n);
    for (long long i=0; i< m+n; i++) {
        cout << a[i] << " ";
    }
}
