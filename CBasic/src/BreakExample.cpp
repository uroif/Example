#include<stdio.h>

int main_BreakExample() {

	printf("Break example\n");

	fflush(stdout);

	// Tao 1 bien x va gan gia tri 2
	int x = 2;

	while (x < 15) {

		printf("-------------------------\n");
		printf("x = %d\n", x);

		//Kiem tra neu x = 5 thi thoat ra khoi vong lap
		if (x == 5) {
			break;
		}
		// Tang gia tri cua x len 1
		x = x + 1;
		printf("x after ++ = %d\n", x);
	}

	return 0;
}
