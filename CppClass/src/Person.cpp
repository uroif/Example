// Khai báo nhúng thêm file Person.h vào
#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

namespace mynamespace {

	Person::Person() {
		// Gán tên mặc định là Anonymous
		name = "Anonymous";
	}

	Person::Person(string name) {
		// Gán giá trị cho trường name của Person
		// Sử dụng this -> name ám chỉ trường name của Person
		this -> name = name;
	}

	// Phương thức hủy đối tượng luôn có cùng tên với Class và có ~ phía trước
	// Phương thức hủy luôn luôn không có tham số
	Person::~Person() {
		cout << "Destructor called" << endl;
	}

	// Nội dung của phương thức getName() của class Person
	string Person::getName() {
		return this -> name;
	}

	// Gán đặt tên mới
	void Person::setName(string newName) {
		// Gán giá trị mới vào cho trường name của Person
		name = newName;
	}

}
