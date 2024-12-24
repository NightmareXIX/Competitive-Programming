#include <bits/stdc++.h>
using namespace std;

#define el '\n'
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        sort(arr.begin(), arr.end());
        // for (int i = 0; i < n; i++) cout << arr[i] << " ";
        // cout << el;
        int i = 0, j = 0, dis = 1, cnt = 1;
        while (j != n - 1 || i != n - 1) {
            j = min(j + 1, n - 1);
            if (arr[j] != arr[j - 1]) cnt++;   
            while (cnt > m || j == n - 1) {
                if (j == n - 1 && arr[j] - arr[j - 1] <= 1 && cnt <= m) 
                    dis = max(dis, j - i + 1);
                if (i == n - 1) break;
                i = min(i + 1, n - 1);
                if (arr[i] != arr[i - 1]) cnt--;
            }
            if (arr[j] - arr[j - 1] > 1) { cnt = 1; i = j; }
            dis = max(dis, j - i + 1);
        }
        cout << dis << el;
    }
    return 0;
}