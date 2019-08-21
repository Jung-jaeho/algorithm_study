//
//  main.cpp
//  BJ11057
//
//  Created by 소율 on 20/08/2019.
//  Copyright © 2019 소율. All rights reserved.
//

#include <iostream>
#define MOD 10007
using namespace std;

int n, dp[11],ans=0;

int main(int argc, const char * argv[]) {
 
    scanf("%d",&n);
    
    for (int i =1; i < 11; i++) dp[i] = 1;
  
    for (int i = 1; i < n; i++)
        for (int j = 1; j < 11; j++)
            dp[j] = dp[j]+ dp[j-1] > MOD ? (dp[j]+ dp[j-1])%MOD : dp[j]+ dp[j-1];
        
    for (int j = 1; j < 11; j++) ans = ans + dp[j] > MOD ? (ans + dp[j]) % MOD: ans + dp[j] ;
    
    
    printf("%d",ans);
    
}
