#include <iostream>

class AClass {
private:				// 변수에는 private !! (생략 가능)
	int num;

public:					// 접근 제어 지시자
	AClass(int anum) {	// 생성자 : 초기화 담당
		num = anum;
	}

	void Alnfo() {
		std::cout << "A::num" << num << std::endl;
	}
};

int main() {

	AClass a(10);	// a라는 객체를 생성하면서 AClass 함수의 10을 넣어라 --> 8번 라인의 함수가 호출됨

	a.Alnfo();
	return 0;
}