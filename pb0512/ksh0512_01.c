/*함수 예제1
**작성자 : 김성현 학번:2023310043
**작성일 05 12 파일명 ksh0512_01.c
*/

#include <stdio.h>
int hap2(int x, int y) { //자식함수 정의 - 매개변수가 2개인 덧셉
	int temp = 0;
	temp = x + y;
	return(temp);
}
//매개변수가 3개인 덧셈을 구하는 자식 함수 정의
int hap3(int x, int y, int z) {
	int temp3 = 0;
	temp3 = x + y + z;
	return(temp3);
}
void main(void) {
	int a = 10, b = 20, c = 0, out = 0;
	out = hap2(a, b); //매개변수 2개인 덧ㅅㅁ 자식 함수 호출
	printf(" % d + % d = % d \n", a, b, out);

	//매개변수 3개인 자식함수 덧셈
	printf("매개변수 3개 입력: ");
	scanf_s("%d %d %d", &a, &b, &c);

	out = hap3(a, b, c);
	printf("%d +%d +%d=%d\n", a, b, c, out);
}