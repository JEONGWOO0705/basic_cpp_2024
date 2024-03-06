#include<iostream>
using namespace std;

class AAA {
private:
	int num;

public:
	AAA(int n = 0) : num(n) {
		cout << "AAA(int n = 0)" << endl;	// 정수 하나를 입력으로 갖는 생성자
	}

	AAA(const AAA& ref) :num(ref.num) {
		cout << "AAA(const AAA&ref)" << endl;		// 객체 하나를 입력으로 갖는 생성자
													
	}

	AAA& operator= (const AAA& ref) {
		num = ref.num;
		cout << "operator = (const AAA& ref)" << endl;		// 대입연산자 오버로딩
		return *this;
	}
};

class BBB {
private:
	AAA mem;
public:
	BBB(const AAA& ref) : mem(ref) {}		// AAA mem = ref 라고 볼 수 있다.
											// 멤버 이니셜라이즈를 통해서 초기화
};

class CCC {
private:
	AAA mem;
public:
	CCC(const AAA& ref) {	// 생성자의 몸체 부분에서 대입 연산을 통한 초기화를 진행하면 선언과 초기화를 각각 별도의 문장에서 진행하는 형태로 바이너리 코드 생성
							// 대입 연산을 통해서 초기화
		mem = ref;
	}
};

int main() {
	AAA obj1(12);
	cout << "****************" << endl;

	BBB obj2(obj1);
	cout << "****************" << endl;

	CCC obj3(obj1);
	return 0;
}