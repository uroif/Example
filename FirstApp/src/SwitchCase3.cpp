#include <stdio.h>

int main_SwitchCase3() {

	char a, b;

	printf("Nhập tên 2 người:\n");
	fflush(stdout);
	scanf("%c%c", &a, &b);

	switch (a) {
	case 'Nam':
		printf("Tên là Nam\n", a);
	switch (b) {
	case 'Nữ':
		printf("Tên là Nữ\n", b);
		}
	}

	printf("Giá trị của a là %c\n", a);
	printf("Giá trị của b là %c\n", b);

	return 0;
}
