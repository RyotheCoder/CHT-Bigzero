#include <bits/stdc++.h>
using namespace std;
int main () {
    long long n, x=0;
    cin >> n;
    while (n > 0) {
        x+= n/5;
        n /= 5;
    }
    cout << x;
}

// Điểm cuối cùng: 20/20 (100.0/100 điểm)
