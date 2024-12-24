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
        int n;
        cin >> n;
        int x = 0, cnt = 1;
        while (abs(x) <= n) {
            if (cnt & 1) x -= 2 * cnt - 1;
            else x += 2 * cnt - 1;
            cnt++;
        }
        if (!(cnt & 1)) cout << "Sakurako\n";
        else cout << "Kosuke\n";
    }
    return 0;
}