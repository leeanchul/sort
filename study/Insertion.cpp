#include <stdio.h>

/*
	삽입 정렬: 오름차순으로 정렬한다.

	장점: 안정한 정렬,레코드가 이미 정렬되어 있는 경우 매우 효율적이다.
	단점: 비교적 많은 레코들의 이동을 포함한다.
		 레코드 수가 많고 레코드 크기가 클 경우에 적합하지 않다.

	시간 복잡도: O(n^2)
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