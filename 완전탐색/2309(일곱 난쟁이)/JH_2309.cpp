#include <iostream>
#include <algorithm>
using namespace std;
//�ϰ�������
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
}//�տ��� 2���� Ű�� ���� 100�̸� -1 ����
int main(void) {

	int sum = 0;//9���� Ű�� ��
	int array[9];//�迭 �Ҵ�


	for (int i = 0; i < 9; i++) {
		cin >> array[i];//�Է�
	}

	for (int i = 0; i < 9; i++) {
		sum += array[i];//9���� Ű����
	}
	Solution(array, sum);//�Լ� ȣ��
	sort(array, array + 9);//��������

	for (int i = 2; i < 9; i++) {
		cout << array[i] << endl;
	}//���
	return 0;
}