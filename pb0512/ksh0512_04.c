/*함수 예제4 - 변환값,매개값 없는 자식 함수
**작성자 : 김성현 학번:2023310043
**작성일 05 12 파일명 ksh0512_04.c
*/
#include <stdio.h>
//자식함수 없는 우너형 선언
void print_line();
//부모 함수 정의
void main(void) {
	print_line();  //자식함수 호출 - 매개변수 x,변환갑 x
	printf("학번   이름   전공   학점   \n");
	print_line(); //자식함수 호출
}
//자식 함수 정의
void print_line(void) {
	int i;
	for (i = 0; i < 50; i++) {
		printf("=");
	}
	printf("\n");
}