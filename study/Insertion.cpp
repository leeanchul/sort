#include <stdio.h>

/*
	���� ����: ������������ �����Ѵ�.

	����: ������ ����,���ڵ尡 �̹� ���ĵǾ� �ִ� ��� �ſ� ȿ�����̴�.
	����: ���� ���� ���ڵ��� �̵��� �����Ѵ�.
		 ���ڵ� ���� ���� ���ڵ� ũ�Ⱑ Ŭ ��쿡 �������� �ʴ�.

	�ð� ���⵵: O(n^2)
*/

int main(void) {

	int i, j, temp;
	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };

	for (i = 0; i < 9; i++) {
		j = i;
		while (array[j] > array[j + 1]) {
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			j--; 
		}
	}

	for (i = 0; i < 10; i++) {
		printf("%d", array[i]);
	}
	return 0;
}