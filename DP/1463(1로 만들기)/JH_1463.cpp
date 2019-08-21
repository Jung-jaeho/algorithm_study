#include<iostream>
#include<queue>
using namespace std;

//1로 만들기
//dynamic programming & bfs

bool check[1000001] = {};
queue <int> q;
int cnt;
void  solution(int n) {

	if (n == 1) {return; }

	while (!q.empty()) {
		int front;
		int size = q.size();
		++cnt;
		for (int i = 0; i < size; i++) {

			front = q.front();
			q.pop();

			if (front % 3 == 0 && check[front / 3] == false) {
				if (front / 3 == 1)return;
				check[front / 3] = true;
				q.push(front / 3);
			}
			if (front % 2 == 0 && check[front / 2] == false) {
				if (front / 2 == 1)return;
				check[front / 2] = true;
				q.push(front / 2);
			}
			if (check[front - 1] == false) {
				if (front - 1 == 1) return;
				check[front - 1] = true;
				q.push(front - 1);
			}
		}
	}
}
/*
	10 5 4 2 1  ->
	10 9 3 1    ->
*/

int main() {
	int n;
	cin >> n;
	q.push(n);
	solution(n);
	cout << cnt;
	return 0;
}
