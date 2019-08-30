#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int arr[2188][2188];

void Fractal(int n, int x, int y) {
    int status = n / 3;
    if (n == 1) {
        arr[x][y] = 1;
        return;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i != 1 || j != 1)
                Fractal(status,x+status*i, y+ status*j);
        }
    }
    return;
}

int main() {
    int n;
    scanf("%d",&n);

    Fractal(n, 0, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}