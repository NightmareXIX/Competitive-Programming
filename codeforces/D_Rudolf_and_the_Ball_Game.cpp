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
    int n, m, x;
    cin >> n >> m >> x;
    set<int> st[2]; // two sets
    int si = 0; // set index
    st[si].insert(x);
    forn(i, m) {
        int r; char c;
        cin >> r >> c;

        while(!st[si].empty()) {
            int del = *st[si].begin();
            st[si].erase(st[si].begin());

            if (c == '0' || c == '?') {
                int val = (del + r - 1) % n + 1;    // clockwise 
                st[si ^ 1].insert(val);
            }
            if (c == '1' || c == '?') {
                int val = (del - r - 1 + n) % n + 1;    // anti clockwise
                st[si ^ 1].insert(val);
            }
        }
        si ^= 1;
    }

    cout << st[si].size() << el;
    for (int val : st[si])
        cout << val << ws;
    cout << el;
}

int32_t main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}