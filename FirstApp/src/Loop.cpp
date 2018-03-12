#include <stdio.h>

int main() {

	int i, n;
	float s = 0.0;

	printf("Nhập số để tính tổng:\n");
	fflush(stdout);
	scanf("%d", &n);

	for(i = 1; i <=n; i++) {
		if(i < n) {
			printf("1/%d + ", i);
			s += 1/(float)i;
		} else {
			printf("1/%d", i);
			s += 1/(float)i;
		}
	}

	printf("\nTổng là %f", s);

    return 0;
}
