#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long
#define lld long double
#define ii pair<int, int>
#define el '\n'
#define ws " "
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pbk push_back
#define mkp make_pair
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
    int n; cin >> n;
    string s; cin >> s;
    int cntD, cntK; cntD = cntK = 0;
    map<ii, int> ump;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'D') cntD++;
        else cntK++;
        int gd = gcd(cntD, cntK);
        ii pr = {cntD / gd, cntK / gd};
        cout << ++ump[pr] << ' ';
    }
    cout << el;
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}