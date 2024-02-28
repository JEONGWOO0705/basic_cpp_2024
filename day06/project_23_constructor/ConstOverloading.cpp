#include <iostream>
using namespace std;

class Sosimple {
private:
	int num;
public:
	Sosimple(int n) :num(n) {}

	Sosimple& Addnum(int n) {
		num += n;
		return *this;
	}

	void SimpleFunc() {
		cout << "SimpleFunc : " << num << endl;
	}

	void SimpleFunc() const {
		cout << "const SimpleFunc : " << num << endl;
	}
};

void YourFunc(const Sosimple& obj) {	// 이 함수는 전달되는 인자를 참조자로, 그것도 const참조자로 받는다
										// 그래서 26행의 함수 호출 결과로 19행의 const 멤버 함수가 호출된다.
	obj.SimpleFunc();
}

int main(void) {
	Sosimple obj1(2);
	const Sosimple obj2(7);

	obj1.SimpleFunc();
	obj2.SimpleFunc();

	YourFunc(obj1);
	YourFunc(obj2);

	return 0;
}