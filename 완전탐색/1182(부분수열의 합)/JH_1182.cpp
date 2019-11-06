#include<iostream>
using namespace std;
//브루트포스
//부분수열의 합

int n;
int s;
int arr[30] = { 0 };
int ans = 0;
void solution(int start,int sum)
{
	sum += arr[start];
	if (sum == s) {
		ans++;
		
	}

	for (int i = 1; i < n; i++) {
		if (start + i < n) {
			solution(start + i,sum);
		}
		else {
			break;
		}
	}

	return;
}


int main()
{
	cin >> n;
	cin >> s;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {

		solution(i,0);
	}
	cout << ans;

	return 0;
}