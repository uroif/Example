// Khai bao su dung thu vien vao ra chuan stdio.h
// (Standard IO)
#include <stdio.h>

int main_IfElseEcample() {

	// Khai bao mot sos dai dien cho tuoi cua ban
	int age;

	printf("Enter your age here: \n");

	// Doi khi su dung printf khong in ra thong bao ngay
	// Su dung fflush(stdout) de in thong bao ngay
	fflush(stdout);

	// Ham scanf se doi ban go vao mot doan van ban tu ban phim
	// Va nhan Enter de hoan thanh
	// No se quet lay mot so (chi dinh boi tham do %d)
	// Va gan vao bien age
	scanf("%d", &age);

	// Kiem tra neu age nho hon 40 thi...
	if(age < 40) {
		printf("You are pretty young");
	}

	// Nguoc lai neu tuoi nam trong khoang 40 den 80 thi...
	else if(age >=40 && age <=80) {
		printf("You are old");
	}

	// Cac truong hop con lai
	else {
		printf("You are very old");
	}

	return 0;
}
