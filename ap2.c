/*
#include<stdio.h>
#include<stdlib.h>

void main()
{
	int list[5];	//5개 정수를 포함하는 배열 list 선언
	int *plist[5];	//포인터 배열 plist 선언

	list[0] = 10;	//list[0]에 10 대입
	list[1]= 11;	//list[1]에 11 대입

	plist[0] = (int *)malloc(sizeof(int));	//plist[0]에 동적 메모리 할당

	printf("list[0] \t = %d\n", list[0]);	//list[0]의 값 출력
	printf("address of list \t= %p\n", list);	//list의 주소를 출력
	printf("address of list[0] \t= %p\n", &list[0]);	//list[0]의 주소를 출력
	printf("address of list + 0 \t= %p\n", list+0);	//list의 주소에서 0바이트만큼 증가 시킨 주소를 출력시킴으로 list, list[0], list+0의 주소가 같음을 알 수 있음
	printf("address of list + 1 \t= %p\n", list+1);	//list의 주소에서 4바이트만큼 증가시킨 주소를 출력
	printf("address of list +2 \t = %p\n", list+2);	//list의 주소에서 8바이트만큼 증가시킨 주소를 출력
	printf("address of list +3 \t= %p\n", list+3);	//list의 주소에서 12바이트만큼 증가시킨 주소를 출력
	printf("address of list +4 \t =%p\n", list+4);	//list의 주소에서 16바이트만큼 증가시킨 주소를 출력하고 주소가 4바이트씩 증가함을 알 수 있음
	printf("address of list[4] \t =%p\n", &list[4]);	//list[4]의 주소를 출력시킴으로 list[4]와 list+4가 같다는 것과 주소가 4바이트씩 증가함을 알 수 있음

	free(plist[0]);	//동적 메모리를 반납

}
*/
