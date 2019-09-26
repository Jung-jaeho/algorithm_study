#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

//퇴사
//dynamic programming 
//dfs로 풀이


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
	}//인덱스가 마지막에 도달하면 최댓값구하기

	if ( (index + s[index].first) <= n) {
		solution(index + s[index].first,sum+s[index].second);
	}//마지막날전까지 상담을 끝낼수 있으면 상담하기
	solution(index + 1,sum);//다음날 상담 스케줄 보기(sum은 더하지 않음)
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