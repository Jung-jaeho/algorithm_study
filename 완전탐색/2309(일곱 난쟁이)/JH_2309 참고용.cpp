#include<iostream>
#include<algorithm>
#include<cstdio>
 
using namespace std;
int arr[10], total,str;
 
int main() {
    
    //9개의 정수 입력
    for (int i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }
 
    str = total - 100;
 
    sort(arr + 0, arr + 9);
 
    for (int i = 0; i < 9; i++) {
 
        for (int j = i+1; j < 9; j++) {
 
            if (arr[i] + arr[j] == str) {
 
                arr[i] = 0, arr[j] = 0;
                sort(arr + 0, arr + 9);
 
                for (int i = 2; i < 9; i++)
                    printf("%d\n", arr[i]);
 
                return 0;
            }
        }
    }
 
    return 0;
}

//난쟁이가 9명일때 어차피 2명을 빼면 100인 값을 구하는 것이니까 역으로
//난쟁이 9 - 100 하면 = 필요없는 난쟁이 2명 키가 나올것이고 그 두명만 빼면 답이 나온다.