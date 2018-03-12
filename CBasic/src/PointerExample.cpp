#include<stdio.h>

int main_PointerExample() {

	// Khai báo một biến
	int var = 120;

	// Khai báo một con trỏ
	int *ip;

	// Gán giá trị của biến var cho con trỏ
	ip = &var;

	// In ra địa chỉ của biến var
	printf("Address of var variable: %x\n", &var);

	// In ra địa chỉ được lưu trữ trong biến "ip"
	printf("Address stored in ip variable: %x\n", ip);

	// Truy cập vào giá trị của biến mà con trỏ đang trỏ tới
	printf("Value of *ip variable: %d\n", *ip);

	fflush(stdout);

	return 0;
}
