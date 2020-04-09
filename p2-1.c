/*
#include<stdio.h>

#define MAX_SIZE 100	//기호 상수 MAX_SIZE 정의

float sum(float list[], int);	//배열 list의 원소들의 합을 나타내는 함수 원형
float input[MAX_SIZE], answer;	//배열 input, 실수형 변수 선언
int i;	//변수 i 선언

void main(void)
{
	for(i=0; i < MAX_SIZE; i++)	//i가 0부터 MAX_SIZE가 될 때까지 반복
		input[i] = i;		//i가 0부터 MAX_SIZE가 될 때까지 반복

	answer = sum(input, MAX_SIZE);	//sum 함수를 호출해 결과값을 answer에 대입
	printf("The sum is: %f\n", answer);	 //answer의 값 출력
}

float sum(float list[], int n)	//배열 list의 원소들의 합을 나타내는 함수
{
	printf("value of list = %p\n", list);	//list의 값 출력
	printf("address of list = %p\n\n", &list);	//list의 주소를 출력

	int i;	//정수형 변수 i 선언
	float tempsum = 0;	//실수형 변수 tempsum선언

	for(i = 0; i < n; i++)	//i가 0부터 n이 될때까지 반복
		tempsum += list[i];	//tempsum에 tempsum과 list[i]의 값의 합을 대입한다.

	return tempsum;	//tempsum의 값을 반환한다.
}
*/
