#include<iostream>
#include<stack>
using namespace std;
//ž
//����
int n;
int arr[500002];
int ans[500002] = { 0 };
stack<int> tower;

//������ ���鼭 ũ�� ���ÿ� �ִ� ģ����� ��
//������ ���ÿ� Ǫ��

int solution() {

	tower.push(n);

	for (int i = n - 1; i >= 1; i--) {

		if (tower.empty()) {
			tower.push(i+1); 
		}

		if (arr[i] < arr[tower.top()]) {
			tower.push(i);
		}
		else {
			int size = tower.size();
			for (int j = 0; j < size; j++) {

				if (arr[i] >= arr[tower.top()]) { ans[tower.top()] = i; tower.pop(); }
				else {
					tower.push(i);
					break;
				}

			}
		}

	}
	for (int i = 1; i <= n; i++) {
		cout << ans[i];
		if (i != n) {
			cout << " ";
		}
	}
	return 0;
}
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	solution();
	return 0;
}