#include <iostream>
#include "Person.h"
using namespace std;

// Khai báo sử dụng namespace
using namespace mynamespace;

int main() {

	// Tạo một đối tượng Person
	Person billGate("Bill Gate");

	cout << "billGate.getName(): " << billGate.getName() << endl;

	// Tạo một đối tượng Person theo phương thức khởi tạo mặc định
	Person aPerson;

	cout << "aPerson.getName(): " << aPerson.getName() << endl;
	cout << "aPerson set new name" << endl;

	// Gán name mới cho aPerson
	aPerson.setName("Markus Hess");

	cout << "aPerson.getNane(): " << aPerson.getName() << endl;

	return 0;
}
