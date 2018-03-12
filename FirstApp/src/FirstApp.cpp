//============================================================================
// Name        : FirstApp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>

int main_FirstApp() {

	int a, b;

	char ch;

	printf("Nhập vào phép toán:");
	fflush(stdout);
	ch = getchar();

	printf("Cho hai số nguyên: ");
	fflush(stdout);
	scanf("%d%d", &a, &b);

	switch (ch) {

	case '+':
		printf("a + b = %d", a + b);
		break;

	case '-':
		printf("a - b = %d", a - b);
		break;

	case '*':
		printf("a * b = %d", a * b);
		break;

	case '/':
		printf("a / b = %d", a / b);
		break;

	default:
		printf("Error: Không phải phép toán!");
	}

	return 0;

}
