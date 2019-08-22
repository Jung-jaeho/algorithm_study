#include<iostream>
#include<algorithm>
using namespace std;
//Æò¹üÇÑ ¹è³¶
//dynamic programming

int N;
int K;
int W;
int V;
int dp[100001] = { 0, };
void solution() {

	for (int i = 0; i < N; i++) {
		cin >> W >> V;
		for (int j = K; j >= W; j--) {
			dp[j] = max(dp[j - W] + V, dp[j]);
		}
	}
	int ans = 0;
	cout << dp[K];

}

int main()
{
	cin >> N;
	cin >> K;
	solution();
	return 0;
}