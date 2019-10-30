//
//  main.cpp
//  BJ1699
//
//  Created by 소율 on 19/08/2019.
//  Copyright © 2019 소율. All rights reserved.
//

#include <iostream>
#include <algorithm>

#define MAX 100000

using namespace std;

int dp[MAX],N;

int main() {
    
    int N;
    scanf("%d",&N);
    
    for(int i=1;i<=N;i++){
        
        dp[i]=i;
        for(int j=1;j*j<=i;j++)
            dp[i]=min(dp[i],dp[i-j*j]+1);
        
    }
    
    printf("%d",dp[N]);
    
    return 0;
}
