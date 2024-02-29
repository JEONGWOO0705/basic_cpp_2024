#include <iostream>
using namespace std;



class SoSimple {
private:
	static int simObjCnt;	// 함수내 static 선언으로 함수내에 함수만 변수를 사용할 수 있고, 변수값이 변하더라도 사라지지 않는다.
							// --> 객체마다 변수가 생성되는 것이 아님!! 하나의 변수를 가지고 여러 객체가 이용하는 변수!
							// 클래스 멤버는 객체가 없어도 사용가능
public:
	SoSimple() {
		simObjCnt++;
		cout << simObjCnt << "번째 SoSimple 객체" << endl;

	}
};
int SoSimple::simObjCnt = 0;

class SoComplex {
private:
	static int cmsObjCnt;
public:

	SoComplex() {
		cmsObjCnt++;

		cout << cmsObjCnt << "번째 SoComplex 객체" << endl;

	}

	SoComplex(SoComplex& copy) {
		cmsObjCnt++;
		cout << cmsObjCnt << "번째 SoComplex 객체" << endl;

	}
};

int SoComplex::cmsObjCnt = 0;

int main(void) {
	SoSimple sim1;
	SoSimple sim2;

	SoComplex com1;
	SoComplex com2 = com1;
	SoComplex();	// 임시 객체

	return 0;
}