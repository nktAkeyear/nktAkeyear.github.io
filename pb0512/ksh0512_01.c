/*�Լ� ����1
**�ۼ��� : �輺�� �й�:2023310043
**�ۼ��� 05 12 ���ϸ� ksh0512_01.c
*/

#include <stdio.h>
int hap2(int x, int y) { //�ڽ��Լ� ���� - �Ű������� 2���� ����
	int temp = 0;
	temp = x + y;
	return(temp);
}
//�Ű������� 3���� ������ ���ϴ� �ڽ� �Լ� ����
int hap3(int x, int y, int z) {
	int temp3 = 0;
	temp3 = x + y + z;
	return(temp3);
}
void main(void) {
	int a = 10, b = 20, c = 0, out = 0;
	out = hap2(a, b); //�Ű����� 2���� ������ �ڽ� �Լ� ȣ��
	printf(" % d + % d = % d \n", a, b, out);

	//�Ű����� 3���� �ڽ��Լ� ����
	printf("�Ű����� 3�� �Է�: ");
	scanf_s("%d %d %d", &a, &b, &c);

	out = hap3(a, b, c);
	printf("%d +%d +%d=%d\n", a, b, c, out);
}