#include <iostream>
using namespace std;

class MyClass {
private:
	int* ptr;

public:
	MyClass(int p):ptr(new int[100]) {
		printf("생성자 호출 \n");
	}

	~MyClass() {
		cout << "소멸자 호출 \n" << endl;
		delete[]ptr;
	}

};

int main() {

	MyClass* m1 = new MyClass(10);

	cout << "===================================================" << endl;
	unique_ptr<MyClass>m2(new MyClass(20));	// smart pointer

	return 0;
}