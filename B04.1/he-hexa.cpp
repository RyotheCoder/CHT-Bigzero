#include <bits/stdc++.h>
using namespace std;
int main () {
    long long n;
    cin >> n;
    string k, hex="0123456789ABCDEF";
    while (n>0) {
        k.insert(0, 1, hex[n%16]);
        n /= 16;
    }
    cout << k;
}

// Điểm cuối cùng: 20/20 (100.0/100 điểm)
