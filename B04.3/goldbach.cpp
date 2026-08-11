#include <bits/stdc++.h>
using namespace std;

bool isprime(long long a) {
    if (a==2) {
        return true;
    }
    if (a==1 || a%2==0) {
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
    freopen("GOLDBACH.INP", "r", stdin);
    freopen("GOLDBACH.OUT", "w", stdout);
    long long n, k;
    cin >> n;
    k = n/2;
    while(k>0) {
        if(isprime(k) && isprime(n-k)) {
            cout << k << " " << n-k;
            return 0;
        }
        k-=1;
    }
}
