#include <stdio.h>

int main() {

	float tuoi = 0;

	printf("Bạn bao nhiêu tuổi? Nhập vào đây: \n");
	fflush(stdout);

	scanf("%f", &tuoi);

	printf("Oh tuổi của bạn là %f!\n", tuoi);

	return 0;

}
