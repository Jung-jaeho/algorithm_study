#include<iostream>
using namespace std;
//����
//���� �ʹ� ũ�Ƿ� �μ��� �� �̻��� ������ �ϸ� �ȵ�
//1���� ������ ������ ��Ÿ����
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