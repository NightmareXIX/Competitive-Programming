#include <bits/stdc++.h>
using namespace std;

#define el '\n'
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        int a, b, ch = 0;
        cin >> a >> b;
        string s, t;
        cin >> s >> t;
        unordered_map<char, int> mp;
        for (int i = 0; i < a; i++) mp[s[i]] = 1;
        for (int i = 0; i < b; i++) mp[t[i]] = 1;
        for (char i = 'a'; i <= 'z'; i++) {
            if (mp[i] == 0) ch = 1;
        }
        if (ch) cout << "yes" << el;
        else cout << "no" << el;
    }
    return 0;
}