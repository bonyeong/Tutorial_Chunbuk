/*

#include <stdio.h>

void print1 (int *ptr, int rows);	//포인터를 사용해 배열을 출력하는 함수 원형

int main()
{
	int one[]={0,1,2,3,4};	//배열 one을 선언

	printf("one     =%p\n", one);	//one의 주소를 출력
	printf("&one    =%p\n", &one);	//one의 주소를 출력
	printf("&one[0] =%p\n", &one[0]);	//&one[0]을 출력함으로 one, &one, &one[0]이 동일함을 알 수 있다.

	print1(&one[0], 5);	//print1함수 호출

	return 0;	//0을 반환
}


void print1 (int *ptr, int rows)	//포인터를 사용해 배열을 출력하는 함수
{
	int i;	//정수형 변수 i 선언

	printf ("Address Contents\n");	//주소와 내용을 나타내는 메시지 출력

	for (i = 0; i < rows; i++)	//i가 0부터 rows가 될때까지 반복
		printf("%8u%5d\n", ptr + i, *(ptr + i));	//ptr에 4*i만큼의 바이트를 더한 만큼과, 그 주소가 가리키는 값을 출력

	printf("\n");	//입력 안내 메시지 출력
}
*/
