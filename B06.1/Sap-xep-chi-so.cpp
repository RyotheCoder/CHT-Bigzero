#include <bits/stdc++.h>
using namespace std;
pair <long long, long long> p[100001];
int main () {
    freopen("SORT2.INP", "r", stdin);
    freopen("SORT2.OUT", "w", stdout);
    long long i=0;
    while(cin>>p[i].first) {
        i++;
        p[i-1].second=i;
    }
    sort(p, p+i);
    for(long long k=0; k<i; k++) {
        cout << p[k].second << " ";
    }
}
