


#include<stdio.h>
#include<stdlib.h>

void main()
{
	int list[5];	//5개의 정수를 포함하는 배열 선언
	int *plist[5] = {NULL,};		//포인터 배열 선언

	plist[0] = (int *)malloc(sizeof(int));	//plist에 동적 할당을 해준다.

	list[0]=1;	//list[0]에 1을 대입
	list[1]=100;	//list[1]에 100을 대입

	*plist[0] = 200;	//*plist[0]에 200을 대입

	printf("value of list[0] = %d\n", list[0]);	//list[0]의 값을 출력
	printf("address of list[0]      = %p\n", &list[0]);	//list[0]의 주소를 출력
	printf("value of list           = %p\n", list);	//list값을 출력
	printf("address of list (&list)  = %p\n", &list);	//list의 주소를 출력

	printf("---------------------------------------------\n\n");

	printf("value of list[1]   = %d\n", list[1]);	//list[1]의 값을 출력
	printf("address of list[1] = %p\n", &list[1]);	//list[1]의 주소를 출력
	printf("value of *(list+1) = %d\n", *(list +1));	//list의 주소에서 4바이트 이동한 것의 포인터의 값을 출력
	printf("address of list+1 = %p\n", list+1);	//list의 주소에서 4바이트를 이동했을 때 값을 출력

	printf("---------------------------------------------\n\n");

	printf("value of *plist[0] = %d\n", *plist[0]);	//*plist[0]의 값을 출력
	printf("&plist[0]          = %p\n", &plist[0]);	//plist[0]의 주소를 출력
	printf("&plist             = %p\n", &plist);	//plist의 주소를 출력
	printf("plist              = %p\n", plist);	//plist의 값을 출력
	printf("plist[0]           = %p\n", plist[0]);	//plist[0]의 값을 출력
	printf("plist[1]           = %p\n", plist[1]);	//plist[1]의 값을 출력
	printf("plist[2]           = %p\n", plist[2]);	//plist[2]의 값을 출력
	printf("plist[3]           = %p\n", plist[3]);	//plist[3]의 값을 출력
	printf("plist[4]           = %p\n", plist[4]);	//plist[4]의 값을 출력

	free(plist[0]);	//동적 메모리를 반납


}
