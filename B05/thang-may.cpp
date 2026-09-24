#include <bits/stdc++.h>
using namespace std;
int main () {
    long long n, m, cnt=0, sum=0;
    cin >> n >> m;
    long long a[n];
    for (long long i=0; i<n;i++) {
        cin >> a[i];
        if (sum+a[i] <= m) {
            sum+=a[i];
            if (i==n-1) {
                cnt+=1;
            }
        } else {
            sum=a[i];
            cnt+=1;
            if (i==n-1) {
                cnt+=1;
            }
        }
    }
    cout << cnt;
}
