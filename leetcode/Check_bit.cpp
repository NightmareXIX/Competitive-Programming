#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        bitset<32> b(n);
        b = ~b;
        n = b.to_ullong();
        cout << n << '\n';
    }
}