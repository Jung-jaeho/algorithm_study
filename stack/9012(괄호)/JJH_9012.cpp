#include <string>
#include <iostream>
#include <stack>

using namespace std;

int check(string str) {

    int i = 0;
    stack<char> q;

    while (i < str.length()) {
        if (str[i] == '(')
            q.push('(');
        else {
            if (q.empty()) {
                return 0;
            }
            q.pop();
        }
        i++;
    }
    if (!q.empty()){
        return 0;
    }
    return 1;
}

int main() {

    int N;
    char str[51];

    scanf("%d",&N);
    getchar();
    while (N > 0) {

        scanf("%s",&str);

        if (check(str))
            printf("YES\n");
        else
            printf("NO\n");;
        N--;
    }
    return 0;
}

