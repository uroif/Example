#include <stdio.h>

int tim_max(int a, int b);

int main_Ham() {

	int a, b, ket_qua;

	printf("Nhập 2 số nguyên:\n");
	fflush(stdout);
	scanf("%d%d", &a, &b);

	ket_qua = tim_max(a, b);

	printf("Giá trị lớn nhất là %d", ket_qua);

	return 0;

}

int tim_max(int a, int b) {

	int kq;

	if(a > b) {
		kq = a;
	} else {
		kq = b;
	}

	return kq;
}
