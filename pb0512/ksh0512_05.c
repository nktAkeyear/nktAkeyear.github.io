/*�Լ� ����5 - ���ȣ��
**�ۼ��� : �輺�� �й�:2023310043
**�ۼ��� 05 12 ���ϸ� ksh0512_05.c
*/

#include <stdio.h>
void fruit(void); //�Լ�����

void main(void) {
	fruit(1);
}
void fruit(int cnt) {
	printf("apple-%d\n", cnt);

	if (cnt == 3) return; //cnt������ 3�� �Ǹ� �Լ� Ż��
	fruit(cnt + 1);//���ȣ��
	printf("jam-%d\n", cnt);
}