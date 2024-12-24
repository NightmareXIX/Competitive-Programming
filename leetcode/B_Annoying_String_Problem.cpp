#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long
#define lld long double
#define el '\n'
#define ws " "
#define yes cout << "Yes\n"
#define no cout << "No\n"
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
    string s, x, y;
    cin >> s >> x >> y;
    
    // if length same or zero count same
    int cntx = 0, cnty = 0;
    for (char c : x) {
        if (c == '0') cntx++;
    }
    for (char c : y) {
        if (c == '0') cnty++;
    }

    if (cntx == cnty || x.size() == y.size()) {
        yes; return;
    }

    // remove padding
    int l = 0, rx = x.size() - 1, ry = y.size() - 1;
    while(true) {
        // cout << 'y';
        int cnt = 0;
        if (x[l] == y[l]) l++;
        else cnt++;

        if (x[rx] == y[ry]) {rx--; ry--;}
        else cnt++;

        if (cnt == 2 || l >= rx || l >= ry) break;
    }
    if (l > rx || l > ry) {
        no; return;
    }
    int cntz = 0, cnto = 0;
    for (int i = l; i <= rx; i++) {
        if (i < rx && x[i] != x[i + 1]) {
            no; return;
        }
        if (x[i] == '0') cntz++;
        else cnto++;
    }
    for (int i = l; i <= ry; i++) {
        if (i < ry && y[i] != y[i + 1]) {
            no; return;
        }
        if (y[i] == '0') cntz++;
        else cnto++;
    }

    cntz = cntz / gcd(cntz, cnto);
    cnto = cnto / gcd(cntz, cnto);
    
    string test = "", cmp = "";
    while (cntz) {
        test += s; cntz--;
    }
    int m = 0;
    while(m < test.size() / cnto) {
        cmp += test[m]; m++;
    }
    // cout << "test: " << test << ws << cmp << el;

    // check if valid
    int sz = cmp.size();
    for (int i = 0; i < test.size(); i++) {
        if (test[i] != cmp[i % sz]) {
            no; return;
        }
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