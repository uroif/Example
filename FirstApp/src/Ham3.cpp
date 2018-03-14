#include <stdio.h>
#include "functions_min.h"

int main_Ham3() {

	int a, b, so_min;

	printf("\nNhap a = ");
	fflush(stdout);
	scanf("%d", &a);

	printf("\nNhap b = ");
	fflush(stdout);
	scanf("%d", &b);

	so_min = tim_min(a, b);

	printf("Gia tri nhỏ nhat giua 2 so la %d\n", so_min);

	return 0;
}
