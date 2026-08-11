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
    long long t;
    cin >> t;
    t+=1;
    while (t--) {
        if(isprime(t)) {
            cout << t;
            return 0;
        }
    }
}

// Điểm cuối cùng: 20/20 (100.0/100 điểm)
