/*	실습 7 : binarySearchArray.c
	작성일 : 2019. 04. 11 ~ 04.12
	작성자 : 2016153 이재성
	프로그램 설명 : 주어진 배열을 정렬하는 함수와 특정값을 이진탐색하는 프로그램
*/

#include <stdio.h>		//전처리문
#define SIZE 16			// define문으로 SIZE를 16으로 지정

void selectionSort(int arr[]);		// 배열을 선택정렬하는 selectionSort함수 선언
void binarySearch(int arr[]);		// 배열을 이진탐색하는 binarySearch함수 선언
void printArray(int arr[]);			// 배열을 출력하는 printArray함수 선언

int main(int argc, char* argv[]) {		// main 함수
	int array[SIZE] = { 1,3,5,7,9,11,13,15,2,4,6,8,10,12,14,16 }; // 크기 16의 배열 선언 및 각각의 값으로 초기화, 여기선 SIZE를 생략가능하다.

	selectionSort(array);		// selexction함수로 배열을 선택정렬
	printArray(array);			// printArray함수로 선택정렬된 배열을 출력
	binarySearch(array);		// binarySearch함수로 배열을 이진탐색

	system("pause");		// 출력창 확인
	return 0;				// 0을 반환
}

void selectionSort(int arr[]) {  // 배열을 매개변수로 받아 선택정렬하는 selectionSort함수, 이 함수의 경우엔 오름차순으로 정렬한다.
	int min;		// 가장 작은 값을 저장할 index의 변수 min 선언
	int temp;		// 값을 저장할 임시값 temp 선언
	int i, j;		// 반복문에서 사용할 선언

	for (i = 0; i < SIZE - 1; i++) {	// 주어진 index의 값을 앞쪽으로 위치를 변경하면서 정렬한다. SIZE-1만큼 반복
		min = i;							// i번째 index부터 최솟값을 찾아 앞쪽으로 위치를 바꾸기 위해
		for (j = i + 1; j < SIZE; j++) {	// i(=min)번째 이후의 값들과 비교하여
			if (arr[min] > arr[j]) {	//	arr[min]보다 작은 값이 있다면
				min = j;				//  min에 j를 저장
			}
		}
		temp = arr[min];		// 중첩 반복을 통해 저장된 arr[min]을 임시값에 저장
		arr[min] = arr[i];		// 현재의 arr[min]과 
		arr[i] = temp;			// arr[i]의 자리를 바꿔준다.
	}
}

void binarySearch(int arr[]) {		// 입력된 값을 이진탐색하는 binarySearch함수
	int key;				// 입력된 key값을 저장할 변수 선언
	int start = 0;			// 배열의 첫 기준을 잡는 인덱스를 뜻하는 변수 선언
	int end = SIZE - 1;		// 배열의 마지막 기준을 잡는 인덱스를 뜻하는 변수 선언
	int mid = 0;				// 배열의 중간 기준을 잡는 인덱스를 뜻하는 변수 선언 및 초기화

	for( ; ;) {		// 무한반복 for문을 통해 printArray로 출력된 배열내에서 key값을 입력하게 유도한다. 아니면 계속 무한반복하기 때문에.
		printf("찾고자하는 값을 입력해주세요 : ");		// 찾고자하는 key값을 입력해달라고 출력
		scanf_s("%d", &key);			// 입력된 값을 key에 저장
		if (key < 1 || key > 16) {			// 입력된 값이 배열이 갖는 값의 범위를 벗어나면 
			printf("배열 범위 내에서 ");		// 배열 범위 내에서 라고 출력해 강조하고
			continue;			// 다시 반복을 시작, 배열 범위 내의 값이 입력되게 유도한다.
		}
		break;		// 범위내의 값이 입력되면 무한 반복을 종료
	}

	for ( ;	 ;) { // 두번째 무한반복. 이경우엔 입력된 key값을 찾을 때까지 반복한다.
		int mid = (int)((start + end) / 2);		// 중간 기준이 조건문에 따라 바뀌므로 반복마다 새로 초기화
		if ( key == arr[mid]) {					// 만약 key값과 동일한 배열의 값을 발견하면
			printf("찾고자하는 %d은 %d 인덱스에 있습니다.\n", key, mid); // key값과 함께 그 index를 출력하고
			break;				// 무한반복을 종료한다.
		}
		else if (key < arr[mid]) {		// 값을 찾지 못하면 조건문을 이용해 end와 start를 새로 설정한다.
			end = mid;		// mid값을 이용해 key위치가 end쪽에 가까운지 start쪽에 가까운지 찾아서
		}					// start 쪽에 가까우면 end를 mid값으로 초기화
		else {				// end 쪽에 가까우면 start를 mid값으로 초기화
			start = mid;	// 그리고 반복을 새로 시작하면 mid값이 바뀌므로 다시 기준을 잡아 key가 어딨는지 탐색한다.
		}
		if (key == 16) {
			printf("찾고자하는 %d은 %d 인덱스에 있습니다.\n", key, 15); 
			break;			/* 만약 key값이 16인 경우 
						index	mid start end
								7	
									7		15
								11	
									11		15
								13	
									13		15
								14
									14		15
								14	
									14		15
								...	...		... 의 결과가 되어서 mid의 값이 영원히 16에 해당하는 index 15를 갖지 못하므로 무한반복한다.
													그래서 조건문을 이용해 따로 처리한다.    */
		}
	}	// 조건문을 통해 break를 만날때까지 무한반복해서 값을 찾는다.
}

void printArray(int arr[]) {		// 배열을 출력하는 printArray함수
	int i;		// 반복문에서 사용할 변수
	printf("배열 출력 : ");
	for (i = 0; i < SIZE; i++) {		// 배열의 크기만큼 반복
		printf("%d ", arr[i]);			// 각 배열의 index를 출력
	}
	printf("\n");		// 모든 배열 출력후 줄바꿈
}