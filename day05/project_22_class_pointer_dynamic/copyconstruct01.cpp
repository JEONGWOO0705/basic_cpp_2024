#include<iostream>
using namespace std;

/*
	복사생성자 : 객체를 복사할때 호출하는 생성자
				 따라서 복사할 객체를 입력으로 가져야 하는데
				 이때 원본 객체의 참조를 입력으로 받는다.
*/

class A {
public:
	A() {
		cout << "디폴트 생성자 호출" << endl;
	}
	A(int n) {
		cout << "A(int n) 생성자 호출" << endl;
	}

	A(const A& r) {	// 참조 형태가 아니면 무한히 복사 생성자가 호출이된다!!
		cout << "A (const A &r) 복사 생성자 호출" << endl;
	}
};

int main(void) {

	A obj1;			// 디폴트 생성자

	A obj2(10);		// 입력 하나 가지는 생성자 호출

	A obj3(obj2);	// 복사 생성자 호출
	return 0;
}