//
//  main.cpp
//  BJ12865
//
//  Created by 소율 on 20/08/2019.
//  Copyright © 2019 소율. All rights reserved.
//

#include <iostream>
#include <cstdio>

using namespace std;

const int MAX = 100001;
int N, K, v, w, dp[MAX];

int main() {
    
    scanf("%d %d", &N, &K);
    
    for (int i = 0; i < N; ++i) {
        scanf("%d %d", &w, &v);
        for (int j = K; j >= w; j--) // 현재 입력한 무게 ~ 최대 들고 다닐수 있는 무게까지 검사
            dp[j] = max(dp[j - w] + v, dp[j]); // 가치의 최대 비교해서 넣음
    }
    printf("%d", dp[K]);
}
