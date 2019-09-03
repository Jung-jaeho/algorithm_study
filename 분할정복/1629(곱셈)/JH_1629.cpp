#include<iostream>
using namespace std;
//곱셈
//수가 너무 크므로 두수의 곱 이상의 연산을 하면 안됨
//1번의 곱으로 나머지 나타내기
long long  solution(long long A, long long B, long long C) {

	long long  odd=0;
	long long  ans;

	if (B == 1)
		return A % C;

	while (B > 0) {

		if (B == 1) {
			ans = ((A%C)*(odd%C)) % C;
			break;
		}
		
		if (B % 2 == 0) {
		
			A = ((A%C)*(A%C))%C;
			B /= 2;
		}

		else {
			if (odd == 0)
				odd = A % C;
 			else
			odd = (odd*(A % C))%C;
			A = ((A%C)*(A%C))%C;
			B /= 2;
		}
		
	}
	return ans;
}

int main() {
	long long A;
	long long B;
	long long C;
	cin >> A >> B >> C;
	cout << solution(A, B, C);
	return 0;
}