#include <stdio.h>

int chu_vi(int d, int r);
int dien_tich(int d, int r);

int chu_vi(int d, int r) {

	int cv;
	cv = (d + r)*2;
	return cv;
}

int dien_tich(int d, int r) {

	int dt;
	dt = d * r;
	return dt;
}

int main_Ham1() {

	int d, r, chuvi, dientich;

	printf("Nhập chiều dài:\n");
	fflush(stdout);
	scanf("%d", &d);

	printf("Nhập chiều rộng:\n");
	fflush(stdout);
	scanf("%d", &r);

	chuvi = chu_vi(d, r);
	dientich = dien_tich(d, r);

	printf("Chu vi là %d\n", chuvi);
	printf("Diện tích là %d\n", dientich);

}
