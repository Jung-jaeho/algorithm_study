
#include<iostream>
#include<math.h>
using namespace std;
//Z
//devided and conquer

int cnt = 0;
int r;
int c;
int ans = 0;
void solution(int n, int x, int y)
{
	

	while (x != 0 || y != 0) {

		if (x < n / 2 && y < n / 2) {
			n /= 2;
		}//1사분면
		else if (x < n / 2 && y >= n / 2) {
			cnt += (1 * (n/2)*(n/2));
			y -= n / 2;
			n /= 2;
		}//2사분면
		else if (x >= n / 2 && y < n / 2) {
			cnt += (2 * (n / 2)*(n / 2));
			x -= n / 2;
			n /= 2;
		}//3사분면
		else if (x >= n / 2 && y >= n / 2) {
			cnt += (3 * (n / 2)*(n / 2));
			x -= n / 2;
			y -= n / 2;
			n /= 2;
		}//4사분면
	}
}

int main() {
	int N;
	int n;
	cin >> N;
	cin >> r >> c;
	n = pow(2, N);
	solution(n, r, c);
	cout << cnt;
	return 0;
}