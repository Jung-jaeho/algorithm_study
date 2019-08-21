//
//  main.cpp
//  BJ9465
//
//  Created by 소율 on 19/08/2019.
//  Copyright © 2019 소율. All rights reserved.
//

#include <iostream>
#define MAX 100000
using namespace std;

int T,N,map[2][MAX], dp[2][3];

int main(int argc, const char * argv[]) {
    
    scanf("%d",&T);
    
    while(T--){
        
        scanf("%d",&N);
        
        for (int i = 0 ; i <2; i++) for (int j =0; j<3; j++) dp[i][j] = 0;
        for (int j = 0; j<2; j++) for (int i =0 ; i < N; i++) scanf("%d",&map[j][i]);
        
        dp[0][0] = map[0][0], dp[0][1]= map[1][0];
        
        for (int i = 1 ; i < N; i++) {
            int cur = i % 2;
            int prev = (cur + 1) % 2;
            
            dp[cur][0] = max(dp[prev][1],dp[prev][2])+map[0][i];
            dp[cur][1] = max(dp[prev][0],dp[prev][2])+map[1][i];
            dp[cur][2] = max(dp[prev][0],dp[prev][1]);
        }
        
        printf("%d\n",max(dp[(N-1)%2][0],max(dp[(N-1)%2][1], dp[(N-1)%2][2])));
        
    }
    
}
