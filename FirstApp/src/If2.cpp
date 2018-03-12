#include <stdio.h>

int main_If2() {

	int a;

	printf("Hãy nhập tuổi của bạn: ");
	fflush(stdout);
	scanf("%d", &a);

	if (a > 18 && a <= 60) {
		printf("Bạn đã trưởng thành!\n");
	} else if (a > 60) {
		printf("Bạn đã già rồi!\n");
	} else {
		printf("Bạn còn trẻ con lắm!\n");
	}

	return 0;
}
