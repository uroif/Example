#include <stdio.h>
#include <math.h>

int main_Calc () {

	int a, b, powx, dif;

	printf("Nhập số thứ nhất: \n");
	fflush(stdout);
	scanf("%d", &a);

	printf("Nhập số thứ hai: \n");
	fflush(stdout);
	scanf("%d", &b);

	powx = pow (a, b);
	dif = a - b;

	printf("Tổng 2 số là %d\n", powx);
	printf("Hiệu 2 số là %d", dif);

	return 0;
}
