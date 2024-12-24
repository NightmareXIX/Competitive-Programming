#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long
#define lld long double
#define el '\n'
#define ws " "
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pbk push_back
#define mkp make_pair

typedef vector<int> vi;
typedef vector<ll> vl;

void solve(int tc)
{
    string s;
    cin >> s;
    int n = s.size();
    ll ans = 0;
    for (int mask = 0; mask < (1 << (n - 1)); mask++) {
        ll sum = 0, idx = 0; 
        string tmp = "";
        tmp += s[idx];
        for (int i = 0; i < n - 1; i++) {
            if (mask & (1 << i)) {
                sum += stoll(tmp);
                tmp = ""; tmp += s[++idx];
            }
            else {
                tmp += s[++idx];
            }
        }
        ans += sum + stoll(tmp);
    }
    cout << ans << el;
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}