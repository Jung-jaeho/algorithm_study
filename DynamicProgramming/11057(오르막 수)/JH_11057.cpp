#include<iostream>
using namespace std;

//오르막 수
//dynamic programming

int n;
int dp[11] = { 0 ,};
int solution()
{
	int ans=0;
	for (int i = 0; i < 10; i++) {
		dp[i] = 1;
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 1; j < 10; j++) {
			dp[j] = dp[j]%10007 + dp[j - 1]%10007;

		}
	}
	for (int i = 0; i < 10; i++) {
		ans += dp[i]%10007;
	}
	cout << ans%10007;
	return 0;
}

int main() {
	cin >> n;
	solution();



	return 0;
}