#include <iostream>
using namespace std;

class SoSimple {
private:
	int num;
public:
	SoSimple(int n) :num(n) {
		cout << "SoSimple(int n) 호출" << endl;
	}

	SoSimple(const SoSimple& copy) : num(copy.num) {

		cout << "Called SoSimple(const SoSimple & copy)" << endl;
	}

	void ShowData() {	// 멤버 함수	--> 객체를 생성하고 사용이 가능하다.
		cout << "num : " << num << endl;

	}
};

void SimpleFuncObj(SoSimple ob) { // 전역 함수 --> 언제든 접근 가능
	// 메인 함수에서 simplefuncobj()가 실행 되면서 SoSimple 클래스의 ob라는 객체가 생성되고 복사 생성자(함수)가 호출이 된다
	ob.ShowData();
}

int main(void) {

	SoSimple obj(7);
	cout << "함수 호출 전" << endl;
	SimpleFuncObj(obj);	
	cout << "함수 호출 후" << endl;

	return 0;
}