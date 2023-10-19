#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

vl dp;

ll koong(int n) {
	if (dp[n] < 0) {
		dp[n] = 0;
		for (auto i = 1; i <= 4; ++i) {
			dp[n] += koong(n - i);
		}
	}

	return dp[n];
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	dp = vl(68, -1);
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;

	int t;
	cin >> t;
	while (0 < (t--)) {
		int n;
		cin >> n;

		cout << koong(n) << '\n';
	}

	return 0;
}