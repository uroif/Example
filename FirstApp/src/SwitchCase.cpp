#include <stdio.h>

int main_SwitchCase1() {

	int i;

	printf("Nhập số:\n");
	fflush(stdout);
	scanf("%d", &i);
	switch(i) {

		case 0:
			printf("Không");
			break;

		case 1:
			printf("Một");
			break;
		default:
			printf("Các số còn lại");
	}

	return 0;
}
