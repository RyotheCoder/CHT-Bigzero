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
    long long n, p;
    cin >> n;
    p=sqrtl(n);
    while(true) {
        if(isprime(p) && p*p>=n) {
            cout << p*p;
            return 0;
        }
        p++;
    }
}
