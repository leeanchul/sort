#include <stdio.h>

/*
	버블정렬 서로 인접한 두 원소를 검사하여 정렬하는 알고리즘
	 
	 버블이 선택보다 느리다. why? 매번 자리를 교체하기 때문이다.
	
	장점: 구현이 매우 간단하다.
	단점: 순서에 맞지 않은 요소를 인접한 요소와 교환한다.
		  배열에서 모든 다른 요소들과 교환되어야 한다.
		  특정 요소가 최종 정렬 위체이 이미 있는 경우라도 교횐된다.

	시간복잡도: O(n^2)
*/

int main(void) {
	int i, j,temp; //반복을 위해 i,j 교환을 위한 temp
	int array[10] = { 1,10,5,8,7,6,4,3,2,9};

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 9 - i; j++) {
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}

	for (i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}

	return 0;
}