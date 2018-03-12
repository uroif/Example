// Khai bao su dung thu vien vao ra chuan stdio.h
// (Standard IO)
#include <stdio.h>

int main_SwitchExample1() {

	// De nghi nguoi dung lua chon
	printf("Please select one option: \n");

	printf("1 - Play a game\n");
	printf("2 - Play music\n");
	printf("3 - Shutdown your computer\n");

	fflush(stdout);

	// Khai bao mot bien option
	int option;

	// Ham scanf doi mot doan text tu ban phim
	// Va nhan Enter de hoan thanh
	// No se quet mot chi so chi dinh boi tham so %d
	// Chuyen thanh so tu nhien (integer) va gan vao bien option
	scanf("%d", &option);

	// Kiem tra gia tri cua option
	switch(option) {

	case 1:
		printf("You choose to play the game \n");
		break;

	case 2:
		printf("You choose to play the music \n");
		break;

	case 3:
		printf("You choose to shutdown your computer\n");
		break;

	default:
		printf("Nothing to do...\n");
		break;
	}

	fflush(stdout);

	return 0;

}
