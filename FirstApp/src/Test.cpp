#include <stdio.h>
int main() {

	int a, b, c;

	printf("Enter 3 numbers: \n");
	fflush(stdout);
	scanf("%d%d%d", &a, &b, &c);

	if(a > b && a > c) {
		printf("Số lớn nhất là %d", a);
	} else if(b > a && b > c) {
		printf("Số lớn nhất là %d", b);
	} else {
		printf("Số lớn nhất %d", c);
	}

	return 0;
}
