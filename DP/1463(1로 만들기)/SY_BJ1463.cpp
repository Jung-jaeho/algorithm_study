//
//  main.cpp
//  BJ1463
//
//  Created by 소율 on 19/08/2019.
//  Copyright © 2019 소율. All rights reserved.
//
#include <iostream>

int f(int n)
{
    int a, b;
    if (n < 2) return 0;
    a = f(n / 2) + n % 2 + 1;
    b = f(n / 3) + n % 3 + 1;
    return std::min(a,b);

}

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
    return 0;
}

/*
 
 //
 //  main.cpp
 //  BJ1463
 //
 //  Created by 소율 on 19/08/2019.
 //  Copyright © 2019 소율. All rights reserved.
 //
 
 #include <iostream>
 #include <vector>
 
 using namespace std;
 
 int N;
 
 int main(int argc, const char * argv[]) {
 
 scanf("%d",&N);
 vector<int>dp(N+1);
 fill(dp.begin(), dp.end(), 1<<9);
 
 dp[1] = 0;
 
 for (int i = 1; i < N; i++) {
 dp[i + 1] = min(dp[i + 1], dp[i] + 1);
 if (i * 2 <= N) dp[i * 2] = min(dp[i * 2], dp[i] + 1);
 if (i * 3 <= N) dp[i * 3] = min(dp[i * 3], dp[i] + 1);
 }
 
 printf("%d",dp[N]);
 
 }
 
 */
