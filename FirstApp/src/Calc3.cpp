#include <stdio.h>
#include <math.h>

int main_Calc3() {

	float a, b, c, delta, x1, x2;

	printf("Giải phương trình bậc 2: ax^2 + bx + c = 0\nNhập a: ");
	fflush(stdout);
	scanf("%f", &a);

	printf("Nhập b: ");
	fflush(stdout);
	scanf("%f", &b);

	printf("Nhập c: ");
	fflush(stdout);
	scanf("%f", &c);

	if (a == 0) {
		if(b == 0) {
			if(c == 0)
				printf("Phương trình có vô số nghiệm.");
			else
				printf("Phương trình vô nghiệm.");
		} else {
			x1 = -c / b;
			printf("Phương trình có nghiệm duy nhất: %f", x1);
		}
	} else {
		delta = b*b - 4*a*c;
		printf("delta là %f\n", delta);
		if (delta < 0) {
			printf("Phương trình vô nghiệm.");
		} else if (delta == 0) {
			x1 = -b /(2 * a);
			printf("Phương trình có một nghiệm duy nhất: %f", x1);
		} else {
			x1 = (-b + sqrt(delta))/(2*a);
			x2 = (-b - sqrt(delta))/(2*a);

			printf("Phương trình có 2 nghiệm phân biệt:\n");
			printf("Nghiệm x1 = %f\n", x1);
			printf("Nghiệm x2 = %f", x2);
		}

	}

	return 0;
}
