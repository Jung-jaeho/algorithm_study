#include<iostream>
#include<algorithm>
using namespace std;

//½ºÆ¼Ä¿
//dynamic programming

int t;
int n;
int sticker[2][100001];
int dp[3][100001];
void solution() {

	if (n == 1)cout << max(sticker[0][0], sticker[1][0]);
	else {
		dp[0][0] = sticker[0][0];
		dp[1][0] = sticker[1][0];
		dp[2][0] = 0;
		for (int i = 1; i < n; i++) {

			dp[0][i] = max(dp[1][i - 1], dp[2][i - 1]) + sticker[0][i];
			dp[1][i] = max(dp[0][i - 1], dp[2][i - 1]) + sticker[1][i];
			dp[2][i] = dp[0][i - 1] > dp[1][i - 1] ? dp[0][i - 1] : dp[1][i - 1];
			
		}
		cout << max(max(dp[0][n - 1], dp[1][n - 1]), dp[2][n - 1]);
	}
}

int main() {
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < n; k++) {
				cin >> sticker[j][k];
			}
		}
		solution();
		if (i != t - 1)
			cout << endl;
	}
	return 0;
}