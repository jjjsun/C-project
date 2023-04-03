#include <stdio.h>
int main() {
	int a, b, c;
	int max = 0;
	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0)
			break;
		if (a > b) {
			if (a > c) {
				max = a;
				if (max >= b + c)
					printf("Invalid");
				else {
					if (b == c)
						printf("Isosceles");
					else
						printf("Scalene");
				}
			}

			else {
				max = c;
				if (max >= a + b)
					printf("Invalid");
				else {
					if (b == a)
						printf("Isosceles");
					else if (c == a)
						printf("Isosceles");
					else
						printf("Scalene");
				}
			}
		}
		else {
			if (b > c) {
				max = b;
				if (max >= b + c)
					printf("Invalid");
				else {
					if (a == c)
						printf("Isosceles");
					if (b == a)
						printf("Isosceles");
					else
						printf("Scalene");
				}
			}
			else {
				max = c;
				if (max >= a + b)
					printf("Invalid");
				else {
					if (a == b) {
						if (b == c)
							printf("Equilateral");
						else
							printf("Isosceles");
					}
					else
						if (b == c)
							printf("Isosceles");
						else
							printf("Scalene");
				}
			}
		}
	}
	return 0;
}