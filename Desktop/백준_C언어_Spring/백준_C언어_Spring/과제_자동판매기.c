#include <stdio.h>
int main() {
	int v, m;
	int c500, c100, c50, c10,sum;
	printf("��ǰ�� ������ ���ΰ���?: ");
	scanf_s("%d", &v);
	printf("���� �� �־�����?: ");
	scanf_s("%d", &m);
	sum = m - v;
	c500 = sum / 500;
	c100 = (sum % 500) / 100;
	c50 = ((sum % 500) % 100) / 50;
	c10 = (((sum % 500) % 100) % 50) / 10;
	printf("500�� ������ %d��\n", c500);
	printf("100�� ������ %d��\n", c100);
	printf("50�� ������ %d��\n", c50);
	printf("10�� ������ %d���Դϴ�.\n", c10);
	return 0;
}
