//
//  main.cpp
//  BJ2447
//
//  Created by 소율 on 27/08/2019.
//  Copyright © 2019 소율. All rights reserved.
//

#include <iostream>
#define MAX 6562
using namespace std;

int n;
bool map[MAX][MAX];

void f(int y, int x, int value){
    
    if(value == 1){
        map[y][x] = true;
        return;
    }
    
    int temp = value/3;
    
    for (int i =0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if(i == 1 && j == 1) continue;
            else f(y + i * temp, x + j * temp, temp);
        }
    }
    
    
}

int main() {
    
    scanf("%d",&n);
    f(0, 0, n);
    
    for (int i = 0 ; i < n; i++) {
        for (int j = 0 ; j < n; j++) {
            if(map[i][j] == true) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
    
}

