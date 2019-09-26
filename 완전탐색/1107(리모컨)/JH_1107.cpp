#include<iostream>
#include<math.h>
using namespace std;
//리모컨 
//브루트포스

int target;
int n;
bool flag = false;

int buttons[10] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };

int result(int a, int b, int c) {
	int tmp1;
	int tmp2;
	if (a > b) {
		tmp1 = b;
	}
	else
		tmp1 = a;

	if (b > c) {
		tmp2 = c;
	}
	else
		tmp2 = b;

	if (tmp1 < tmp2) return tmp1;
	else return tmp2;
}


int digit(int n) {
	int cnt = 0;

	if (n == 0)
		return 1;
	while (n != 0) {
		n /= 10;
		cnt++;
	}
	return cnt;
}//자릿수 리턴


bool check(int num) {
	int temp = 0;

	if (num == 0 && flag == true) {
		return false;
	}

	while (num != 0) {
		temp = num % 10;
		num /= 10;
		for (int i = 0; i < n; i++) {
			if (temp == buttons[i])
				return false;
		}
	}
	return true;
}

int near1() {
	int min = 500000;
	int ans = 1000000;

	for (int i = 0; i < target; i++) {

		if (check(i)) {

			if (min >= abs(target - i)) {
				ans = i;
				min = abs(target - i);
			}

		}
	}
	return ans;
}
int near2() {
	int min = 500000;
	int ans = 1000000;

	for (int i = target; i < 1000000; i++) {

		if (check(i)) {

			if (min >= abs(target - i)) {
				ans = i;
				min = abs(target - i);
			}

		}
	}
	return ans;
}


int main() {

	cin >> target;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> buttons[i];
		if (buttons[i] == 0) {
			flag = true;
		}
	}
	int min_b = 0;

	if (n == 10)
	{
		cout << abs(100 - target);
	}



	if (n != 10) {
		int Near1 = near1();
		int Near2 = near2();
		cout << result(abs(100 - target), digit(Near1) + abs(target - Near1), digit(Near2) + abs(target - Near2));

	//	cout << Near1 << endl;
		//cout << Near2 << endl;
	}
	return 0;
}