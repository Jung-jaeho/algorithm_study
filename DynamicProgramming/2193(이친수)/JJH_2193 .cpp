//
//  main.cpp
//  BJ2193
//
//  Created by 소율 on 19/08/2019.
//  Copyright © 2019 소율. All rights reserved.
//

#include <iostream>

using namespace std;

int N;
long long dp[90] = {0,1,1,};
int main(int argc, const char * argv[]) {
  
    scanf("%d",&N);
    for (int i = 3; i<=N; i++) dp[i] = dp[i-1]+dp[i-2];
    printf("%lld",dp[N]);
}
