#include<iostream>
#include<string>
using namespace std;

//적록색약
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
	}//하
	if (x - 1 != -1 && check[x - 1][y] == false && map[x][y] == map[x - 1][y]) {
		dfs(x - 1, y);
	}//상
	if (y + 1 != n && check[x][y + 1] == false && map[x][y] == map[x][y + 1]) {
		dfs(x, y + 1);
	}//우
	if (y - 1 != -1 && check[x][y - 1] == false && map[x][y] == map[x][y - 1]) {
		dfs(x, y - 1);
	}//좌
}//적록색약이 아닌사람

void dfs1(int x, int y)
{
	check1[x][y] = true;
	if (x + 1 != n && check1[x + 1][y] == false && map[x][y] == map[x + 1][y]) {
		dfs1(x + 1, y);
	}//하
	if (x - 1 != -1 && check1[x - 1][y] == false && map[x][y] == map[x - 1][y]) {
		dfs1(x - 1, y);
	}//상
	if (y + 1 != n && check1[x][y + 1] == false && map[x][y] == map[x][y + 1]) {
		dfs1(x, y + 1);
	}//우
	if (y - 1 != -1 && check1[x][y - 1] == false && map[x][y] == map[x][y - 1]) {
		dfs1(x, y - 1);
	}//좌
}//적록생약인 사람

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
	}//입력

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			if (check[i][j] == false) {
				dfs(i, j);
				cnt++;
			}
			if (map[i][j] == 'G')
				map[i][j] = 'R';//  적록색약일때를 구하기위해 재귀를 끝내고 나온후 'G'를'R'로 바꾸어준다.
		}
	}//적록색약이 아닌사람
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			if (check1[i][j] == false) {
				dfs1(i, j);
				cnt1++;
			}
		}
	}//적록색약인 사람

	cout << cnt << " " << cnt1;
	return 0;
}
