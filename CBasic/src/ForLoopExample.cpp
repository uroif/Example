// Khai bao su dung thu vien vao ra chuan stdio.h
// (Standard IO)
#include <stdio.h>

int main_ForLoopExample() {

	printf("For loop example\n");

	fflush(stdout);

	// Tao 1 bien x va gan gia tri ban dau cua no la 2
	// Dieu kien kiem tra la x < 15
	// Neu x < 15 dung thi khoi lenh duoc chay
	// Sau moi buoc lap (iteration), gia tri cua x lai duoc tang them 3
	for (int x = 2; x < 15; x = x + 3) {
		printf("\n");
		printf("Value of x = %d\n", x);
		fflush(stdout);
	}

	return 0;

}
