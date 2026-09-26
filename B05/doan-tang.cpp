#include <bits/stdc++.h>
using namespace std;
int main () {
    long long n, lmax=0, cnt;
    cin >> n;
    long long a[n];
    for (long long i=0; i<n; i++) {
        cin >> a[i];
        if (i==0) {
            cnt=1;
        } else if (a[i] >= a[i-1]) {
            cnt+=1;
        } else {
            if (cnt>lmax) {
                lmax=cnt;
            }
            cnt=1;
        }
    }
    if (cnt>lmax) {
        lmax=cnt;
    }
    cout << lmax;
}
