#include<stdio.h>

int main_ContinueExample() {

	printf("Continue example\n");

	fflush(stdout);

	// Tao 1 bien x va gan gia tri 2
	int x = 2;

	while (x < 7) {

		printf("----------------\n\n");
		printf("x = %d\n", x);

		// % la toan tu chia lay so du
		// Neu x la so chan, bo qua cac dong lenh phia duoi
		// cua continue, tiep tuc buoc lap moi (neu co)
		if (x % 2 == 0) {
			// Tang gia tri x len 1
			x++;
			continue;
		}
		else {
			// Tang gia tri cua x len 1
			x++;
		}
		printf("x after ++ = %d\n", x);
	}
	return 0;
}
