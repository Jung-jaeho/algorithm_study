#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

//���
//dynamic programming 
//dfs�� Ǯ��


int n;
pair <int, int> s[20];
vector<bool> check;
int ans = 0;
int result = 0;
int sum = 0;
void solution(int index,int sum) {

	if (index >= n) {
		ans = max(ans, sum);
		return;
	}//�ε����� �������� �����ϸ� �ִ񰪱��ϱ�

	if ( (index + s[index].first) <= n) {
		solution(index + s[index].first,sum+s[index].second);
	}//�������������� ����� ������ ������ ����ϱ�
	solution(index + 1,sum);//������ ��� ������ ����(sum�� ������ ����)
}



int main() {
	int a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s[i].first;
		cin >> s[i].second;
	}
	solution(0,0);

	cout << ans;
	return 0;
}