/*함수 예제2 - 매개 변수가 없는 자식 함수
**작성자 : 김성현 학번:2023310043
**작성일 05 12 파일명 ksh0512_02.c
*/

#include <stdio.h>

int get_num(void); //함수 원형 선언
//부모함수 정의
void main(void) {
	int out;

	out = get_num();  //자식함수 호출
	printf("자식함수가 입력받은 값 = %d\n", out);
}
//자식함수 get_nim()정의
int get_num(void) {
	int x;
	printf("정수 입력:");
	scanf_s("%d", &x);
	return(x);
}