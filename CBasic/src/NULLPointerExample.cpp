#include<stdio.h>

int main() {

	// Khai báo một con trỏ
	// Không gán giá trị nào cho con trỏ này
	int *pointer1;

	// In ra địa chỉ của pointer1
	printf("Address of pointer1 is %x\n", pointer1);

	// Kiểm tra pointer1 là khác NULL
	if (pointer1) {
		// In ra giá trị của vùng bộ nhớ mà pointer1 đang trỏ tới
		printf ("Value of *pointer1 is %d\n", *pointer1);
	}

	// Khai báo một biến con trỏ
	// Trỏ tới vị trí NULL (không trỏ tới đâu)
	int *pointer2 = NULL;

	// In ra địa chỉ của pointer2
	printf ("Address of pointer2 is %x\n", pointer2);

	// Nếu pointer2 là NULL in ra thông báo
	if (!pointer2) {
		printf ("pointer2 is NULL");
	}
	else {
		// Nếu pointer2 NULL truy cập vào giá trị của *pointer2
		// sẽ bị lỗi và làm ngừng chương trình
		printf ("Value of *pointer2 is &d\n", *pointer2);
	}

	fflush(stdout);

	return 0;
}
