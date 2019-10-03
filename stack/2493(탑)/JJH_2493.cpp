#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(void) {
    int n, value;

    scanf("%d", &n);
    stack<pair<int, int> > arr;
    queue<int> result;

    for (int i = 1; i <= n; i++){
        scanf("%d", &value);


        while (!arr.empty()) {

            if (arr.top().second > value) {
                result.push(arr.top().first);
                break;
            } else if (arr.top().second <= value)
                arr.pop();

        }
        if (arr.empty())
            result.push(0);

        arr.push(make_pair(i, value));
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", result.front());
        result.pop();
    }
}
