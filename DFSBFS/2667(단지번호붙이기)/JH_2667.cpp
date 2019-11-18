#include<iostream>
#include<algorithm>
#include<vector>
//단지번호붙이기
//dfs,bfs

using namespace std;

bool visit[25][25] = { 0 };
bool map[25][25];
int n;
int cnt;
vector<int> ans;
int total;
int solution(int x, int y)
{
	cnt++;
	visit[x][y] = true;
	if (x + 1 < n && map[x + 1][y] == 1 && visit[x + 1][y] == false) {
		solution(x + 1, y);
	}
	if (y + 1 < n&&map[x][y + 1] == 1 && visit[x][y + 1] == false) {
		solution(x, y + 1);
	}
	if (y - 1 >= 0 && map[x][y - 1] == 1 && visit[x][y - 1] == false) {
		solution(x, y - 1);
	}
	if (x - 1 >= 0 && map[x - 1][y] == 1 && visit[x - 1][y] == false) {
		solution(x - 1, y);
	}
	return 0;
}

int main() {

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			char a;
			cin >> a;
			map[i][j] = a - '0';
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (visit[i][j] == false && map[i][j] == 1) {
				total++;
				solution(i, j);
				ans.push_back(cnt);
				cnt = 0;
			}
		}
	}
	sort(ans.begin(), ans.end());
	cout << total << endl;
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << endl;
	}
	return 0;
}