#include <iostream>
using namespace std;

class MyClass {

	int num;

public:
	MyClass() {	//default 생성자
		cout << "생성자 호출: MyClass()" << endl;
		num = 10;
	}
	MyClass(int anum) {
		num = anum;
		cout <<"num : " << num << endl;
	}
	void MyClassInfo() {
		cout << "num: " << num << endl;
	}
};

int main() {

	//MyClass *m = new MyClass();
	MyClass m1;	// 객체 생성 명령으로 자동 호출 된다
	m1.MyClassInfo();
	MyClass m2(20);
	return 0;
}