#include <stdio.h>
/*
	���� ������ 1ȸ���� �����ϰ� ���� ���� ���� ���� �ڷᰡ �� �տ� ���� �ǰ�,
	�� ���� ȸ�������� �� ��° �ڷḦ ������ ���Ͽ� �����Ѵ�.

	����: �ڷ� �̵� Ƚ���� �̸� �����ȴ�.
	����: �������� �������� �ʴ´�.
		 ���� ���� ���ڵ尡 �ִ� �ܿ��� ������� ��ġ�� ����� �� �ִ�.

	�ð� ���⵵: O(n^2) 
*/
int main(void) {
	int i, j, min, max, index, temp;
	
	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };

	for (i = 0; i < 10; i++) {
		min = 999; // min �ּڰ� �����ؾߵǱ⶧����
		for (j = i; j < 10; j++) {
			if (min > array[j]) {
				min = array[j];
				index = j;
			}
			
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	for (i = 0; i < 10; i++) {
		printf("%d", array[i]);
	}

	return 0;
}

//���� ������ O(n^2)
