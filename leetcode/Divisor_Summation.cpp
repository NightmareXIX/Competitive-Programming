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

const int N = 5e5 + 9;
int sum[N];

void harmonicSum() 
{
    for (int i = 1; i < N; i++) {
        for (int j = 2 * i; j < N; j += i)
            sum[j] += i;
    }
    return;
}

void solve(int tc)
{
    int n;
    cin >> n;
    cout << sum[n] << el;
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    harmonicSum();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}