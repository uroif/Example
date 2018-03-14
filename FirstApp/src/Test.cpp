#include <stdio.h>
int main() {

	int num, count, sum = 0;

	printf("Enter the term: \n");
	fflush(stdout);
	scanf("%d", &num);

	for (count = 1; count <= num; count++) {
		sum += count;
	}

	printf("Sum of %d is %d", num, sum);

	return 0;
}
