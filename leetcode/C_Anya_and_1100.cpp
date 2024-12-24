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

string s;

bool check(int idx) {
    string per = "1100";
    if (idx < 0 || idx + 3 >= s.size()) return false;
    for (int i = 0; i < 4; i++) {
        if (s[i + idx] != per[i]) return false;
    }
    return true;
}

void solve(int tc)
{
    cin >> s;
    int q, cnt = 0; cin >> q;
    
    for (int i = 0; i < s.size(); i++) {
        if (check(i)) cnt++;
    }

    rep(i, q) {
        int p; char v;
        cin >> p >> v;
        p--;
        int valid = 0;
        for (int j = p - 3; j <= p; j++) {
            if (check(j)) valid--;
        }
        s[p] = v;
        for (int j = p - 3; j <= p; j++) {
            if (check(j)) valid++;
        }
        cnt += valid;
        if (cnt > 0) yes;
        else no;
    }
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}