#include <iostream>
using namespace std;

namespace mynamespace {

	class Rectangle {

	private:
		int width;
		int height;

	public:
		Rectangle();
		Rectangle(int, int);

	public:
		int getArea() {
			return width * height;
		}
		int getWidth() {
			return width;
		}
		int getHeight() {
			return height;
		}
	};

	Rectangle::Rectangle() {
		width = 10;
		height = 5;
	}

	Rectangle::Rectangle(int a, int b) {
		width = a;
		height = b;
	}
}

// Khai báo sử dụng các thư viện nằm trong không gian tên mynamespace
// Nghĩa là bao gồm cả class Rectangle
using namespace mynamespace;

int main_Rectangle() {

	// Tạo 1 hình chữ nhật rect1 theo phương thức khởi tạo 2 tham số Rectangle(int, int)
	// Giá trị 5 được gán cho width, giá trị 4 được gán cho height
	Rectangle rect1(5,4);

	// Tạo 1 hình chữ nhật rect2 theo phương thức khởi tạo mặc định Rectangle()
	// width, height của nó là mặc định
	Rectangle rect2;

	cout << "rect1:" <<endl;

	// Gọi phương thức lấy ra chiều rộng
	cout << " width: " << rect1.getWidth() << endl;

	// Gọi phương thức lấy ra chiều cao
	cout << " height: " << rect1.getHeight() << endl;

	// Gọi phương thức diện tích
	cout << " area: " << rect1.getArea() << endl;

	cout <<"rect2:" << endl;
	cout << " width: " << rect2.getWidth() << endl;
	cout << " height: " << rect2.getHeight() << endl;
	cout << " area: " << rect2.getArea() << endl;

	return 0;
}
