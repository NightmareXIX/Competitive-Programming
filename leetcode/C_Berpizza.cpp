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

template<class T>
void print(T& a)
{
    for(auto x:a)
        cout<<x<<" ";
    cout<<"\n";
}

struct Compare { bool operator()(const pair<int, int>& lhs, const pair<int, int>& rhs) { 
    if (lhs.first == rhs.first) 
        { return lhs.second > rhs.second;  } 
    return lhs.first < rhs.first; } 
};

void solve(int tc)
{
    int n, sz = 0;
    cin >> n;
    vi arr, que;
    priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;
    int j = 0;
    rep(i, n) {
        int a, m; 
        cin >> a;
        if (a == 1) {
            cin >> m;
            arr.pbk(m);
            pq.push({m, sz++});
        }
        else if (a == 2) {
            while(!arr[j]) j++;
            arr[j] = 0;
            cout << j + 1 << ws;
        }
        else {
            int ind;
            while(true) {
                ind = pq.top().second;
                if (arr[ind]) break;
                pq.pop();
            }
            arr[ind] = 0;
            cout << ind + 1 << ws;
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(0);
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}