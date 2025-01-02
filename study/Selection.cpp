#include <stdio.h>
/*
	선택 정렬은 1회전을 수행하고 나면 가장 작은 값의 자료가 맨 앞에 오게 되고,
	그 다음 회전에서는 두 번째 자료를 가지고 비교하여 정렬한다.

	장점: 자료 이동 횟수가 미리 결정된다.
	단점: 안정성을 만족하지 않는다.
		 값이 같은 레코드가 있는 겨웅에 상대적인 위치가 변경될 수 있다.

	시간 복잡도: O(n^2) 
*/
int main(void) {
	int i, j, min, max, index, temp;
	
	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };

	for (i = 0; i < 10; i++) {
		min = 999; // min 최솟값 선택해야되기때문에
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

//선택 정렬은 O(n^2)
