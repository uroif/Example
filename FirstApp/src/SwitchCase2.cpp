#include <stdio.h>

int main_SwitchCase2() {

	char hoc_luc;

	printf("Nhập học lực vào đây:\n");
	fflush(stdout);
	scanf("%c", &hoc_luc);

	switch(hoc_luc) {

		case 'A':
			printf("Học tốt!");
			break;
		case 'B':
			printf("Học được!");
			break;
		case 'C':
			printf("Cần cố gắng hơn");
			break;
		default:
			printf("Không thể cứu được");
			break;
	}

	return 0;
}
