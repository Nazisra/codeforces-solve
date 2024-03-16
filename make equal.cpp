#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

vector<string> solve(int t, vector<vector<int>> tests) {
    vector<string> results;
    for (auto test : tests) {
        int n = test.size();
        vector<int> a = test;
        int total_sum = accumulate(a.begin(), a.end(), 0);
        vector<int> mod_sums(n, 0);
        partial_sum(a.begin(), a.end(), mod_sums.begin());
        for (int i = 0; i < n; i++) {
            mod_sums[i] %= n;
        }
        if (total_sum % n == 0 && all_of(mod_sums.begin(), mod_sums.end(), [n](int mod_sum){return mod_sum == 0;})) {
            results.push_back("YES");
        } else {
            results.push_back("NO");
        }
    }
    return results;
}

int main() {
    int t;
    cin >> t;
    vector<vector<int>> tests;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        tests.push_back(a);
    }
    vector<string> results = solve(t, tests);
    for (auto result : results) {
        cout << result << endl;
    }
    return 0;
}