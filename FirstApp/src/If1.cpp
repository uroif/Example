#include <stdio.h>

int main_If1() {

	int a;

	printf("Nhập vào số nguyên: ");
	fflush(stdout);

	scanf("%d", &a);

	if (a == 10) {
		printf("Điểm của bạn là %d.\n Bạn thật xuất sắc!", a);
	} else if (a <= 9 && a >= 8) {
		printf("Điểm của bạn là %d.\n Bạn học rất tốt!", a);
	} else if (a <= 7 && a >= 5) {
		printf("Điểm của bạn là %d.\n Bạn học tạm được!", a);
	} else if (a <= 4 && a >= 1) {
		printf("Điểm của bạn là %d.\n Bạn học kém!", a);
	} else {
		printf("Điểm của bạn là %d.\n Bó tay với bạn!", a);
	}

	printf("\nHave a good day!");

	return 0;

}
