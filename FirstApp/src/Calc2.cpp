#include <stdio.h>
#include <math.h>

int main_Calc2() {

	int a, b, x;

	printf("Nhập số thứ nhất: \n");
	fflush(stdout);
	scanf("%d", &a);

	printf("Nhập số thứ hai: \n");
	fflush(stdout);
	scanf("%d", &b);

	x = -b / a;

	printf("Kết quả x = %d", x);

	return 0;

}
