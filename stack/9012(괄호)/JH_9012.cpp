#include<iostream>
#include <stack>
#include<string>
using namespace std;

//괄호
//기본 스택문제

int n;
int cnt;
stack<char> stak;
string s;
int solution() {
	cnt = 0;
	stak = stack<char>();
	if (s[0] == ')') { cout << "NO"; return 0; };

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(') {
			stak.push(s[i]);
		}
		else {
			if (stak.empty()) {
				cnt++; continue;
			}
			else {
				stak.pop();
			}
		}
	}

	if (cnt>0||!stak.empty()) {
		cout << "NO";
	}
	else {
		cout << "YES";
	}
	return 0;
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) {

		cin >> s;
		solution();
		if (i != n - 1) {
			cout << endl;
		}
	}


	return 0;
}