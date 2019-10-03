#include<iostream>
using namespace std;
//종이의 개수
//devided and conquer

int n;
bool flag = true;
int map[2200][2200];
int check[3];
bool Is_same(int x, int y, int n) {

	int tmp = map[x][y];
	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (tmp != map[i][j])return false;
		}
	}
	return true;

}
void solution(int n, int x, int y)
{
	if (n == 1) {
		check[map[x][y]]++;
		return;
	}

	if (Is_same(x, y, n)) {
		check[map[x][y]]++;
	}

	else {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				solution(n / 3, x + ((n / 3)*i), y + ((n / 3)* j));
			}
		}
	}
	return;
}
//

int main() {
	cin >> n;



	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
			if (map[i][j] == -1)map[i][j] = 2;
		}
	}

	solution(n, 0, 0);
	cout << check[2] << endl;
	cout << check[0] << endl;
	cout << check[1];

	return 0;
}