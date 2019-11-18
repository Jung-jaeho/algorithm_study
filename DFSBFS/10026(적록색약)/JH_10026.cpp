#include<iostream>
#include<string>
using namespace std;

//���ϻ���
//dfs 
int n;
char map[101][101];
bool check[101][101] = { false };
bool check1[101][101] = { false };
void dfs(int x, int y)
{
	check[x][y] = true;
	if (x + 1 != n && check[x + 1][y] == false && map[x][y] == map[x + 1][y]) {
		dfs(x + 1, y);
	}//��
	if (x - 1 != -1 && check[x - 1][y] == false && map[x][y] == map[x - 1][y]) {
		dfs(x - 1, y);
	}//��
	if (y + 1 != n && check[x][y + 1] == false && map[x][y] == map[x][y + 1]) {
		dfs(x, y + 1);
	}//��
	if (y - 1 != -1 && check[x][y - 1] == false && map[x][y] == map[x][y - 1]) {
		dfs(x, y - 1);
	}//��
}//���ϻ����� �ƴѻ��

void dfs1(int x, int y)
{
	check1[x][y] = true;
	if (x + 1 != n && check1[x + 1][y] == false && map[x][y] == map[x + 1][y]) {
		dfs1(x + 1, y);
	}//��
	if (x - 1 != -1 && check1[x - 1][y] == false && map[x][y] == map[x - 1][y]) {
		dfs1(x - 1, y);
	}//��
	if (y + 1 != n && check1[x][y + 1] == false && map[x][y] == map[x][y + 1]) {
		dfs1(x, y + 1);
	}//��
	if (y - 1 != -1 && check1[x][y - 1] == false && map[x][y] == map[x][y - 1]) {
		dfs1(x, y - 1);
	}//��
}//���ϻ����� ���

int main()
{
	int cnt = 0;
	int cnt1 = 0;
	string a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		for (int j = 0; j < n; j++) {
			map[i][j] = a[j];
		}
	}//�Է�

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			if (check[i][j] == false) {
				dfs(i, j);
				cnt++;
			}
			if (map[i][j] == 'G')
				map[i][j] = 'R';//  ���ϻ����϶��� ���ϱ����� ��͸� ������ ������ 'G'��'R'�� �ٲپ��ش�.
		}
	}//���ϻ����� �ƴѻ��
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			if (check1[i][j] == false) {
				dfs1(i, j);
				cnt1++;
			}
		}
	}//���ϻ����� ���

	cout << cnt << " " << cnt1;
	return 0;
}
