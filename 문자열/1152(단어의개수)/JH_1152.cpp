#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
//�ܾ��� ����
//���ڿ� ó�� 
// getline()
// ó�� ����� ������ ������ ��� ó���� ���ΰ�..

// abcd abcd abdc
//abc abc abc 
// abc abc acb 
//abc acb abc

int main()
{
	string a;
	int cnt = 0;
	getline(cin, a);

	for (int i = 0; i < a.size(); i++) {
		if (a[i] == ' ') {
			if (i == 0) continue;
			else if (0 < i&&i <= a.size() - 1) cnt++;
		}
		if (i == a.size() - 1) {
			if (a[i] != ' ') cnt++;
		}
	}
	cout << cnt;

	return 0;
}