#include<stdio.h>

int main_ArrayExample2() {

	// Khai báo một mảng 2 chiều (3 hàng, 5 cột)
	int a[3][5] = {{1, 2, 3, 4, 5}, {0, 3, 4, 5, 7}, {0, 3, 4, 0, 0}};

	// Sử dụng vòng lặp for để in ra các phần tử của mảng
	for (int row = 0; row < 3; row++) {
		for (int col = 0; col < 5; col++) {
			printf("Element at [%d,%d] = %d\n", row, col, a[row][col]);
		}
	}

	fflush(stdout);

	return 0;
}
