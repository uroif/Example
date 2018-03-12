#include <iostream>
#include <math.h>

using namespace std;

namespace mynamespace {

	class Circle {

		private:
			int radius;

		public:
			Circle() {
				radius = 100;
			}
			// Phương thức khởi tạo (constructor) một tham số
			// Gán giá trị trong tham số cho trường radius
			Circle(int r) {
				radius = r;
			}

		public:
			float getArea() {
				// M_Pi là hằng số định nghĩa trong <math.h>
				return M_PI * radius * radius;
			}
			// Phương thức trả về bán kính đường tròn
			int getRadius();

			// Phương thức gán lại giá trị cho bán kính
			void setRadius(int r) {
				radius = r;
			}
	};

	// Nội dung phương thức getRadius() của class Circle
	int Circle::getRadius() {
		return radius;
	}
}

// Khai báo sử dụng không gian tên mynamespace
using namespace mynamespace;

int main_Circle() {

	// Tạo 1 đường tròn bán kính 5
	Circle circle1(5);

	// Tạo 1 đường tròn bán kính mặc định (100)
	Circle circle2;

	cout << "Circle 1:" << endl;
	cout << " radius: " << circle1.getRadius() << endl;
	cout << " area: " << circle1.getArea() << endl;

	cout << "Circle 2:" << endl;
	cout << " radius: " << circle2.getRadius() << endl;
	cout << " area: " << circle2.getArea() << endl;

	// Gọi phương thức gán giá trị mới cho bán kính đường tròn 2
	circle2.setRadius(200);

	cout << "Circle 2 (after set new Radius):" << endl;
	cout << " radius: " << circle2.getRadius() << endl;
	cout << " area: " << circle2.getArea() << endl;

	return 0;
}
