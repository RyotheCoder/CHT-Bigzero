#include <bits/stdc++.h>
using namespace std;
int main () {
    freopen("INSULT.INP", "r", stdin);
    freopen("INSULT.OUT", "w", stdout);
    long long n,i=0, x, y, s=0;
    cin >> n;
    long long a[n];
    while (i<n) {
        cin >> a[i];
        s+=a[i];
        i++;
    }
    sort(a, a+n);
    x=0;
    y=n-1;
    while (y!=x && x<y) {
        s+=max(0LL,a[y]-a[x]);
        x++;
        y--;
    }
    cout << s;
}
