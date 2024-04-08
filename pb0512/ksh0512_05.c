/*함수 예제5 - 재귀호출
**작성자 : 김성현 학번:2023310043
**작성일 05 12 파일명 ksh0512_05.c
*/

#include <stdio.h>
void fruit(void); //함수선언

void main(void) {
	fruit(1);
}
void fruit(int cnt) {
	printf("apple-%d\n", cnt);

	if (cnt == 3) return; //cnt변수가 3이 되면 함수 탈출
	fruit(cnt + 1);//재귀호출
	printf("jam-%d\n", cnt);
}