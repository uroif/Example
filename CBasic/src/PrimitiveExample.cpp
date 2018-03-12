// Khai bao thu vien ra vao chuan stdio,h
// (Standard IO)
#include <stdio.h>

// Khai bao su dung thu vien float.h
#include <float.h>

int main_PrimitiveExample() {

	// Ham sizeof(type)
	// tra ve so byte can thiet de luu tru kieu du lieu nay
	printf("Storage size for float: %d \n", sizeof(float));

	// FLT_MIN la hang so, gia tri nho nhat cua kieu float
	// Hang so nay duoc dinh nghia trong thu vien float.h
	printf("Minimum float positive value: %E \n", FLT_MIN);

	// FLT_MAX la hang so, gia tri lon nhat cua kieu du lieu float
	// Hang so nay duoc dinh nghia trong thu vien float.h
	printf("Maximum float positive value: %E \n", FLT_MAX);

	// FLT_DIG la hang so, so vi tri toi da cua phan thap phan
	// Hang so nay duoc dinh nghia trong thu vien float.h
	printf("Precision value: %d \n", FLT_DIG);

	return 0;

}
