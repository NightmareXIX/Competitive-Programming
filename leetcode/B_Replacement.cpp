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
#define ii pair<int, int>
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
    int n; string s, r;
    cin >> n >> s >> r;
    int zero = 0, one = 0;
    for (char c : s) {
        if (c == '0') zero++;
        else one++;
    }
    int sz = n - 1;
    for (int i = 0; i < sz; i++) {
        if ((zero == 0 && one > 1) || (one == 0 && zero > 1)) {
            no;
            return;
        }
        char c = r[i];
        if (c == '0') one--;
        else zero--;
    }
    yes;
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}