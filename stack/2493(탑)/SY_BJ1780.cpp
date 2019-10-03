//
//  main.cpp
//  BJ1780
//
//  Created by 소율 on 27/08/2019.
//  Copyright © 2019 소율. All rights reserved.
//

#include <iostream>
#define MAX 2190
using namespace std;

int map[MAX][MAX],t;
int m = 0, z = 0, o = 0 ;

void find(int x, int y, int size) {
    
    if (size == 1) {
        if (map[x][y] == -1) m++;
        else if (map[x][y] == 0) z++;
        else if (map[x][y] == 1) o++;
        return;
    }
    
    for( int i = x ; i < x+size ; i++)
        for (int j = y; j < y+size; j++) {
            if (map[x][y] != map[i][j]) {
                for( int z = 0 ; z < 3 ; z++)
                    for ( int r = 0; r < 3 ; r++)
                        find(x + (size / 3)*z , y + (size / 3)*r, size / 3);
                return;
            }
        }
    
    if (map[x][y] == -1) m++;
    else if (map[x][y] == 0) z++;
    else if (map[x][y] == 1) o++;
    return;
    
}

int main() {
    
    scanf("%d",&t);
    
    for (int i = 0; i < t; i++)
        for (int j = 0; j < t; j++)
            scanf("%d",&map[i][j]) ;
    
    find(0, 0, t);
    
    printf("%d\n%d\n%d",m,z,o);
    
    return 0;
}
