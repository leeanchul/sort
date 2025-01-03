#include <stdio.h>

/*
	퀵 정렬: 분할 정복 알고리즘의 하나로, 매우 빠른 수행 속도
	-합병 정렬과 달리 퀵 정렬은 리시트를 비균등하게 분할한다.
	분할(Divide): 비균등하게 2개의 부분 배열
	정복(COnquer):순환 호출 이용하여 다시 분활 정복 방법 적용
	결합(Combine):정렬된 부분 배열들을 합병

	장점: 속도가 빠르다, 추가 메모리 공간을 필요로 하지 않는다.
	단점: 정렬된 리스트에 대해서는 퀵 정렬의 불균형 분활에 의해
		오히려 수행시간이 더 많이 걸린다.

	시간 복잡도: O(n log2 n)

	방법:
	1.pitbot을 설정한다.
	2.피벗 기준 오른쪽 이동하면서 큰 값을 찾고
	3.피벗 기준 왼쪽으로 이동하면서 작은 값을 찾아
	4. 큰값과 작은 값을 바꾼다.
	 만약 엇갈린 상항이면 피벗값과 바꾼다.
*/


int number = 10;
int data[10] = { 1,10,5,8,7,6,4,3,2,9 };

void quickSort(int *data, int start, int end) {
	if (start >= end) {//원소가 1개인 경우
		return;
	}
	int key = start;//키는 첫번재 원소
	int i = start + 1; //키값 오른쪽 한칸씩 이동
	int j = end; //키캆보다 작은값을 찾기 위해
	int temp;

	while (i <= j) { //엇갈릴 때까지 반복
		while (data[i] <= data[key]) { //키 값보다 큰 값을 만날때 까지
			i++;
		}
		while (data[j] >= data[key] && j>start) { //키 값보다 작은 값을 만날때 까지
			j--;
		}

		if (i > j) { //현재 엇갈린 상태면 키값과 교체
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else {
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
		
	}
	quickSort(data, start, j - 1);
	quickSort(data, j + 1, end);
}

int main(void) {
	quickSort(data, 0, number - 1);

	for (int i =0; i < number; i++) {
		printf("%d", data[i]);
	}

	return 0;
}