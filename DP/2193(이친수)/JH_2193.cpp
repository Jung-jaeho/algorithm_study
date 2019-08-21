#include<iostream>
using namespace std;

//ÀÌÄ£¼ö
//fibonacci

int n;
long long dp[92] = { 0, };
long long solution(int n)
{
	if (n == 1 || n == 2) {
		return dp[n];
	}
	if (dp[n] != 0)return dp[n];

	return dp[n] = solution(n - 1) + solution(n - 2);

}

int main()
{
	cin >> n;
	dp[1] = 1;
	dp[2] = 1;
	solution(n);
	cout << dp[n];
	return 0;
}