/*
#include<stdio.h>

struct student1 {	//student1 구조 정의
	char lastName;	//성
	int studentId;	//학번
	char grade;	//등급
};

typedef struct {	//student2 구조 정의
	char lastName;	//성
	int studentId;	//학번
	char grade;	//등급
}student2;

int main(){
	struct student1 st1 = {'A', 100, 'A'};	//student1구조체 변수 st1를 선언 후 초기화

	printf("st1.lastName = %c\n", st1.lastName);	//st1.lastName의 값을 출력
	printf("st1.studentId = %d\n", st1.studentId);	//st1.studentId의 값을 출력
	printf("st1.grade = %c\n", st1.grade);	//st1.grade의 값을 출력

	student2 st2 = {'B', 200, 'B'};	//student2 구조체 변수 st2를 선언 후 초기화

	printf("\nst2.lastName = %c\n", st2.lastName);	//st2.lastName의 값을 출력
	printf("st2.studentId = %d\n", st2.studentId);	//st2.studentId의 값을 출력
	printf("st2.grade = %c\n", st2.grade);	//st2.grade의 값을 출력

	student2 st3;	//student2 구조체 변수 st3를 선언

	st3 = st2;	//st2의 값을 st3으로 구조 치환

	printf("\nst3.lastName = %c\n", st3.lastName);	//st3.lastName의 값을 출력
	printf("st3.studentId = %d\n", st3.studentId);	//st3.studentId의 값을 출력
	printf("st3.grade = %c\n", st3.grade);	//st3.grade의 값을 출력

	if(st3 == st2)
		printf("equal\n");
	else
		printf("not equal\n");

	return 0;	//0을 반환

}
*/
