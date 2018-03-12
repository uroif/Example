// Khai bao su dung thu vien vao ra chuan stdio.h
// (Standard IO)
#include <stdio.h>

int main_SwitchExample2() {

	// Khai bao bien option va gan gia tri 3
	int option = 3;

	printf("Option = %d\n", option);

	// Kiem tra gia tri cua option
	switch(option) {

	case 1:
		printf("Case 1\n");
		break;

	case 2:
		printf("Case 2\n");
		// No break

	case 3:
		printf("Case 3\n");
		// No break

	case 4:
		printf("Case 4\n");
		// No break

	case 5:
		printf("Case 5\n");
		break;

	default:
		printf("Nothing to do...");
		break;
	}

	fflush (stdout);

	return 0;

}
