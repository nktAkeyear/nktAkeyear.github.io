/*�Լ� ����3 - ��ȯ���� ���� �ڽ� �Լ�
**�ۼ��� : �輺�� �й�:2023310043
**�ۼ��� 05 12 ���ϸ� ksh0512_03.c
*/

#include<stdio.h>
void print_char(char, int); //�ڽ��Լ� ���� ����
//�θ��Լ� main ()����
void main(void) {
	print_char('@', 5); 
}
//�ڽ��Լ� print_char()����
void print_char(char x, int y) {
	int i;
	for (i = 0; i < y; i++) {
		printf("%c",x);
	}
}