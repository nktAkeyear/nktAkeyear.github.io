/*함수 예제3 - 변환값가 없는 자식 함수
**작성자 : 김성현 학번:2023310043
**작성일 05 12 파일명 ksh0512_03.c
*/

#include<stdio.h>
void print_char(char, int); //자식함수 원형 선언
//부모함수 main ()정의
void main(void) {
	print_char('@', 5); 
}
//자시함수 print_char()정의
void print_char(char x, int y) {
	int i;
	for (i = 0; i < y; i++) {
		printf("%c",x);
	}
}