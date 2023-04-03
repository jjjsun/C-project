#include <stdio.h>
int main() {
	int a, b, c;
	int max = 0;
	
	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0)
			break;
		else {
			if (a == b) {
				if (b == c)
					printf("Equilateral");
				else if (b > c)
					printf("Isosceles");
				else {
					if (c >= a + b)
						printf("Invalid");
					else
						printf("Isosceles");
				}
			}
			else if(a>b){
				if (c > a) {
					if (c >= a + b)
						printf("Invalid");
					else
						printf("Scalene");
				}
				else if (c == a) {
					printf("Isosceles");
				}
				else {
					if (a >= b + c)
						printf("Invalid");
					else {
						if (b == c)
							printf("Isosceles");
						else
							printf("Scalene");
					}
				}


			else{//b>a인경우만남음}
		}
	}
}