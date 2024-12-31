#include <bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < (n); i++)
#define ll long long
#define lld long double
#define el '\n'
#define ws " "
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pbk push_back
#define mkp make_pair
#define ii pair<int, int>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
typedef vector<int> vi;
typedef vector<ll> vl;

template<class T>
void print(T& a)
{
    for(auto x : a)
        cout << x << " ";
    cout << "\n";
}

void solve(int tc)
{
    string s;
    cin >> s;
    int len = -1, n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            len = n - i; break;
        }
    }

    if (len == -1) {
        cout << 1 << ws << 1 << ws << 1 << ws << n << el;
        return;
    }

    string sub1 = s.substr(n - len, len), mx = "0";
    int ans = 1;
    for (int i = 0; i < n - len; i++) {
        if (s[i] != '1') continue;

        string sub2 = s.substr(i, len), xr = "";
        for (int j = 0; j < len; j++) {
            if (sub1[j] != sub2[j]) 
                xr += '1';
            else 
                xr += '0';
        }

        if (xr > mx) {
            mx = xr;
            ans = i + 1;
        }
    }
    cout << 1 << ws << n << ws << ans << ws << ans + len - 1 << el;
}

int32_t main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}