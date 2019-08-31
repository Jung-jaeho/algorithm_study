//
//  main.cpp
//  BJ1629
//
//  Created by 소율 on 27/08/2019.
//  Copyright © 2019 소율. All rights reserved.
//

// ver.1
#include <iostream>

using namespace std;
typedef long long ll;

ll A,B,C, ans = 1,temp = 0;

void f(ll n, ll e){
    
    if(e > B) return;

    ll c = ( n * n ) % C;

    f(c , e * 2);
    
    if(temp + e <= B) {
        temp += e;
        ans = (ans * n)%C;
    }
}

int main(int argc, const char * argv[]) {
    
    scanf("%lld %lld %lld",&A,&B,&C);
    
    f(A,1);
    
    printf("%lld",ans);
}


// ver.2

/*
 #include <iostream>
 #include <cstdio>
 
 using namespace std;
 typedef long long ll;
 
 ll A, B, C, ans = 1;
 
 
 int main() {
 
 scanf("%lld %lld %lld", &A, &B, &C);
 
 
 while (B > 0) {
 
 // 제곱근의 수가 홀수인 경우 A^(B/2)*A 로 나눌 수 있음
 if(B%2 ==1) ans = (ans*A)%C;
 A = (A*A)%C;
 B /= 2;
 
 }
 
 // 시간 복잡도 O(log B)
 
 printf("%lld", ans);
 
 
 }
 */
