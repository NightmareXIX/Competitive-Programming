#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int solve_test_case(int n, int k, const vector<pair<int, int>>& partnerships) {
    int bad_partnerships = 0;
    for (const auto& [a, b] : partnerships) {
        // Check if this partnership is "good"
        if (abs(a - b) != n / 2) {
            bad_partnerships++;
        }
    }
    return bad_partnerships;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> partnerships(k);
        for (int i = 0; i < k; i++) {
            cin >> partnerships[i].first >> partnerships[i].second;
        }

        int result = solve_test_case(n, k, partnerships);
        cout << result << "\n";
    }

    return 0;
}