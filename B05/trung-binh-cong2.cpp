#include <bits/stdc++.h>
using namespace std;
int main () {
    long long n, k;
    cin >> n;
    long long a[n];
    long long b[n];
    for (long long i=0; i<n; i++) {
        cin >> b[i];
        if (i==0) {
            a[i]=b[i];
        } else {
            a[i]=(b[i]*(i+1))-(b[i-1]*(i));
        }
    }
    for (long long i=0; i<n; i++) {
        cout << a[i] << " ";
    }
}
