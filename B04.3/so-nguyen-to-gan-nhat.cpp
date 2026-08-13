#include <bits/stdc++.h>
using namespace std;

bool isprime(long long a) {
    if (a==2) {
        return true;
    }
    if (a==1 || a%2==0 || a==0) {
        return false;
    }
    long long k=3;
    while (k*k<=a) {
        if (a%k==0) {
            return false;
        }
        k+=2;
    }
    return true;
}

int main () {
    long long a, q, k;
    freopen("NEAREST.INP", "r", stdin);
    freopen("NEAREST.OUT", "w", stdout);
    cin >> a;
    q=a;
    k=a;
    while(!isprime(q)) {
        q+=1;
    }
    while(!isprime(k) && k>=2) {
        k-=1;
    }
    if (k<=1) {
        k=q;
    }

    if (abs(q-a) >= abs(k-a)) {
        cout << k;
        return 0;
    } else {
        cout << q;
        return 0;
    }
}
