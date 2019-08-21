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
