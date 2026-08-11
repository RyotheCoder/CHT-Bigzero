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
    long long n, k, i=0;
    cin >> n;
    string m=to_string(n);
    if(!isprime(n)) {
        cout << "NO";
        return 0;
    } else if (n<=9) {
        cout << "YES";
        return 0;
    }
    while (n>1) {
        k=(m[i] - '0') * pow(10, m.length() - i-1);
        n-=k;
        m=to_string(n);
        if(!isprime(n)) {
            cout << "NO";
            return 0;
        }
        if (n<=9) {
            cout << "YES";
            return 0;
        }
    }
    cout << "YES";
}

// Điểm cuối cùng: 40/40 (100.0/100 điểm)
