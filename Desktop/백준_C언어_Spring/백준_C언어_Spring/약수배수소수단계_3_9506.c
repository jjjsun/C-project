//Ʋ�ȴ�. ��Ʋ�ȴ��� �𸣰���.

#include <stdio.h>

int main() {
	int n, sum = 0;
	while (1) {
		scanf("%d", &n);
		if (n == -1)
			return 0;
		for (int i = 1; i < n; i++) {
			if (n % i == 0)
				sum += i;
		}

		if (sum == n) {
			printf("%d = 1", n);
			for (int i = 2; i < n; i++) {
				if (n % i == 0) 
					printf("+ %d", i);
			}
			printf("\n");
		}
		else if (sum!= n)
			printf("%d is NOT perfect.\n", n);
		sum = 0;
	}
	return 0;
}