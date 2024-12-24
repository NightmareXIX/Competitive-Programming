#include <bits/stdc++.h>
using namespace std;

#define el '\n'
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s = "";
        for (int i = 0; i < n - 1; i++) s += "0";
        s += "1";
        cout << s << el;
    }
    return 0;
}