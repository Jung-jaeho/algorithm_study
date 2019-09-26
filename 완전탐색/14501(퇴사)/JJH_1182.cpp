#include <iostream>
#include <vector>

using namespace std;

int n;
int s;
int sum = 0;
int result = 0;
int num=0;
vector <int> arr;

void dfs (int i)
{
    sum += arr[i];

    if (sum == s)
        result++;

    for (int j = i+1; j < n; j++)
        dfs(j);

    sum -= arr[i];
}

int main()
{
    scanf("%d %d",&n, &s);
    getchar();

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        arr.push_back(num);
        getchar();
    }


    for (int i = 0; i < n; i++)
        dfs(i);

    printf("%d",result);

    return 0;
}

/*
5 0
-7 -3 -2 5 8

 */