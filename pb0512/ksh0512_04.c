/*�Լ� ����4 - ��ȯ��,�Ű��� ���� �ڽ� �Լ�
**�ۼ��� : �輺�� �й�:2023310043
**�ۼ��� 05 12 ���ϸ� ksh0512_04.c
*/
#include <stdio.h>
//�ڽ��Լ� ���� ����� ����
void print_line();
//�θ� �Լ� ����
void main(void) {
	print_line();  //�ڽ��Լ� ȣ�� - �Ű����� x,��ȯ�� x
	printf("�й�   �̸�   ����   ����   \n");
	print_line(); //�ڽ��Լ� ȣ��
}
//�ڽ� �Լ� ����
void print_line(void) {
	int i;
	for (i = 0; i < 50; i++) {
		printf("=");
	}
	printf("\n");
}