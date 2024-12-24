#include <bits/stdc++.h>
using namespace std;

#define el '\n'

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) {
        vector<int> nums = {11,13,31};
        // for (int i = 0; i < 3; i++) cin >> nums[i];
        int n = nums.size();
        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            int x = 1, ch = 1;
            while (x << 1 < nums[i]) x = x << 1;
            x--;
            // cout << x << el;
            while (x < nums[i]) {
                // cout << (x | (x + 1)) << el;
                if ((x | (x + 1)) == nums[i]) {
                    // cout << i << el;
                    ans[i] = x;
                    ch = 0;
                    break;
                }
                else x++;
            }
            if (ch) ans[i] = -1;
        }
        for (int i = 0; i < n; i++) cout << ans[i] << " ";
        cout << el;
    }
    return 0;
}