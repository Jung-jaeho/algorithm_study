#include <iostream>
#include <algorithm>
using namespace std;
//일곱난쟁이
/*20
7
23
19
10
15
25
8
13*/
int Solution(int *array, int sum) {

	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {

			if (sum - array[i] - array[j] == 100) {
				array[i] = -1;
				array[j] = -1;
				return 0;
			}
		}

	}
	return -1;
}//합에서 2명의 키를 빼서 100이면 -1 대입
int main(void) {

	int sum = 0;//9명의 키의 합
	int array[9];//배열 할당


	for (int i = 0; i < 9; i++) {
		cin >> array[i];//입력
	}

	for (int i = 0; i < 9; i++) {
		sum += array[i];//9명의 키의합
	}
	Solution(array, sum);//함수 호출
	sort(array, array + 9);//오름차순

	for (int i = 2; i < 9; i++) {
		cout << array[i] << endl;
	}//출력
	return 0;
}