#include <iostream>
using namespace std;

// 리터럴은 참조가 안됨 but, const 리터럴이면 참조가 됨

class SelfRef {
private:
	int num;

public:
	SelfRef(int n) : num(n) {
		cout << "객체 생성" << endl;

	}

	SelfRef& Adder(int n) {

		num += n;
		return *this;		// 객체 자기 자신을 반환	// 밑에서 obj를 반환	// this는 자기 자신의 주소값 저장
							// *this == 자기 자신
	}

	SelfRef& ShowTwoNumber() {
		cout << num << endl;
		return *this;
	}
};

int main(void) {

	SelfRef obj(3);
	SelfRef& ref = obj.Adder(2);

	obj.ShowTwoNumber();
	ref.ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();

	return 0;
}