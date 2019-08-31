//
//  main.cpp
//  BJ1074
//
//  Created by 소율 on 27/08/2019.
//  Copyright © 2019 소율. All rights reserved.
//

//ver.1
#include <iostream>

int N,r,c;
int main(){
    scanf("%d %d %d",&N,&r,&c);
    
    int s=0;
    for(N = 1 << (N - 1); N; N /= 2){
        s += N * N * (r / N * 2 + c / N);
        r %= N;
        c %= N;
    }
    printf("%d\n",s);
    return 0;
}


//ver.2

/*
 #include <cstdio>
 
 int N, r, c, ans = 0;
 
 void f(int size, int y, int x) {
 
     if (size == 2) {
 
     if (r == y && c == x) {
        printf("%d", ans);
        return;
     }
     ans++;
     if (r == y && c == x + 1) {
        printf("%d", ans);
        return;
     }
     ans++;
     if (r == y + 1 && c == x) {
        printf("%d", ans);
        return;
     }
     ans++;
     if (r == y + 1 && c == x + 1) {
        printf("%d", ans);
        return;
     }
     ans++;
     return;
 }
 
 f(size >> 1, y, x);
 f(size >> 1, y, x + (size >> 1));
 f(size >> 1, y + (size >> 1), x);
 f(size >> 1, y + (size >> 1), x + (size >> 1));
 
 }
 
 int main() {
 
 scanf("%d %d %d", &N, &r, &c);
 
 f(1<<N,0,0);
 
 }
 */
