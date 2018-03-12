#include<stdio.h>

int main_DoWhileLoopExample() {

	printf("Do-While loop example\n");

	fflush(stdout);

	// Tao 1 bien x va gan gia tri 2
	int x = 2;

	// Dac tinh cua vong lap do-while la no thuc hien khoi it nhat mot lan
	// Sau do no kiem tra dieu kien
	// De quyet dinh co thuc hien tiep khoi lenh hay khong
	do {
		printf("Value of x = %d\n", x);

		x = x + 3;
		fflush(stdout);
	}

	while (x < 10);

	// Need ";"

	return 0;

}
