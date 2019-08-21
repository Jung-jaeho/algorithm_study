#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int n;
int cnt = 0;
int dp[100001] = { 0 };
int a;
void solution() {
	int less;
	
	for (int i = 5; i <= n; i++) {
		a = sqrt(i);
		less = 1000;
		for (int j = a; j >= 1; j--) {
			less = min(less, (dp[i - (j*j)] + 1));
			dp[i] = less;
		}
	}
	cout << dp[n];
}

int main()
{
	cin >> n;
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 3;
	dp[4] = 1;

	solution();
	

	return 0;
}