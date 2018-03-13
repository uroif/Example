#include <stdio.h>

int max(int a, int b);

int max(int a, int b) {

	if( a >= b) {
		return a;
	} else {
		return b;
	}
}

int main_Ham2() {

	int a, b, tim_max;

	printf("Nhập số a:\n");
	fflush(stdout);
	scanf("%d", &a);

	printf("Nhập số b:\n");
	fflush(stdout);
	scanf("%d", &b);

	tim_max = max(a, b);

	printf("Số lớn nhất là %d", tim_max);

}

