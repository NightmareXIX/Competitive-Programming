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

struct compareSecond
{
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    }
};


void solve(int tc)
{
    int n, m, l;
    cin >> n >> m >> l;
    vector<ii> hur(n), pow(m);
    for (auto &i : hur) cin >> i.first >> i.second;
    for (auto &i : pow) cin >> i.first >> i.second;
    
    ll ind = 0, cnt = 0, jump = 1;
    priority_queue<ii, vector<ii>, compareSecond> pq;
    for (auto itr : hur) {
        int lim = itr.first, diff = itr.second - itr.first + 2;

        while(ind < m && pow[ind].first < lim) {
            pq.push(pow[ind]);
            ind++;
        }

        while(!pq.empty()) {
            if (jump >= diff) break;
            jump += pq.top().second;
            pq.pop();
            cnt++;
        }
        
        if (jump < diff) {
            cout << -1 << el;
            return;
        }
    }
    cout << cnt << el;
}

int32_t main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}