#include <stdio.h>
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b) {
		if (a > c) {
			if (a < b + c)
				printf("%d", a + b + c);
			else
				a = b + c - 1;
				printf("%d", a+b+c);
		}
		
		else {
			if (c < a + b)
				printf("%d", a + b + c);
			else
				c = a + b - 1;
				printf("%d", c+a+b);
		}
	}
	else {
		if (b > c) {
			if (b < a + c)
				printf("%d", a + b + c);
			else
				b = a + c - 1;
				printf("%d", b+a+c);
		}
		else {
			if (c < a + b)
				printf("%d", a + b + c);
			else
				c = a + b - 1;
				printf("%d", c+a+b);
		}
	}
	return 0;
}