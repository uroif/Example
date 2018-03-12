#ifndef PERSON_H_
#define PERSON_H_

// Khai báo <string> để sử dụng class string
#include <string>

// Khai báo "using namespace std" để sử dụng string, cout...
using namespace std;

namespace mynamespace {

	// Class Person mô phỏng một lớp người
	class Person {

	private:
		// Trường name
		string name;

	public:
		// Phương thức khởi tạo mặc định
		Person();

		// Phương thức khởi tạo với một tham số
		Person(string);

		// Phương thức hủy đối tượng
		virtual ~Person();

	public:
		// Phương thức trả về tên người
		string getName();

		// Phương thức gán đặt tên người
		void setName(string);
	};

}

#endif
