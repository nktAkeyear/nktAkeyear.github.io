/*�Լ� ����2 - �Ű� ������ ���� �ڽ� �Լ�
**�ۼ��� : �輺�� �й�:2023310043
**�ۼ��� 05 12 ���ϸ� ksh0512_02.c
*/

#include <stdio.h>

int get_num(void); //�Լ� ���� ����
//�θ��Լ� ����
void main(void) {
	int out;

	out = get_num();  //�ڽ��Լ� ȣ��
	printf("�ڽ��Լ��� �Է¹��� �� = %d\n", out);
}
//�ڽ��Լ� get_nim()����
int get_num(void) {
	int x;
	printf("���� �Է�:");
	scanf_s("%d", &x);
	return(x);
}