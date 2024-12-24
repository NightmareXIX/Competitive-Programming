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

const int N = 1e6 + 9;
int aSum[N];
void harmonicSum(void) {
    for (int i = 1; i < N; i++) {
        for (int j = i * 2; j < N; j += i)
            aSum[j] += i;
    }
}

void solve(int tc)
{
    int n;
    cin >> n;
    if (aSum[n] > n) cout << "abundant" << el;
    else if (aSum[n] < n) cout << "deficient" << el;
    else cout << "perfect" << el;
}

int32_t main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    harmonicSum();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}