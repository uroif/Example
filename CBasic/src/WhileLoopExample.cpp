#include<stdio.h>

int main_WhileLoopExample() {

	printf("While loop example\n");

	fflush(stdout);

	// Tao 1 bien x va gan gia tri ban dau cua no la 2
	int x = 2;

	// Dieu kien kiem tra la x < 10
	// Neu x < 10 dung thi chay khoi lenh
	while (x < 10) {
		printf("Value of x = %d\n", x);

		x = x + 3;

		fflush(stdout);
	}

	return 0;

}
