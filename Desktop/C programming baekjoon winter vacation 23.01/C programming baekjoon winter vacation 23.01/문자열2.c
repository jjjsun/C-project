#include <stdio.h>

int main() {
	int n=0;
	char a[101]={0,};
	int sum = 0;
	scanf("%d", &n);

	scanf("%s", a);
	for (int i = 0; i < n; i++)
		sum = sum + a[i] - '0';
		//�ƽ�Ű�ڵ忡�� ����O�� �ƽ�Ű���� 48�� ���ϴϱ� ���ڿ��� ���Ҷ��� ������ϴ� �ƽ�Ű �����̿�
		//������ ���ڸ� ���ϱ� ���� 48�� ����.
	printf("%d", sum);
	
	return 0;
}

