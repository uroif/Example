#include<stdio.h>

int main_ArrayExample1() {

	// Khai bao 1 mang voi cac phan tu
	int years[] = { 2001, 2003, 2005, 1980, 2003 };

	// Ghi ra so byte can thiet de luu tru kieu int
	printf("Sizeof(int) = %d\n", sizeof(int));

	// So byte can thiet de luu tru mang nay
	printf("Sizeof(years) = %d\n", sizeof(years));

	int arrayLength = sizeof(years) / sizeof(int);

	printf("Element count of array years = %d\n\n", arrayLength);

	// Su dung vong lap for de in ra cac phan tu cua mang
	for (int i = 0; i < arrayLength; i++) {
		printf("Element at %d = %d\n", i, years[i]);
	}

	fflush(stdout);

	return 0;
}
