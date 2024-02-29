#include <iostream>
using namespace std;

int simObjCnt = 0;
int cmsObjCnt = 0;

class SoSimple {
public:
	SoSimple() {
		simObjCnt++;
		cout << simObjCnt << "번째 SoSimple 객체" << endl;

	}
};

class SoComplex {
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

int main(void) {
	SoSimple sim1;
	SoSimple sim2;

	SoComplex com1;
	SoComplex com2 = com1;
	SoComplex();	// 임시 객체

	return 0;
}

// simObjCnt, cmsObjCnt은 전역변수 이므로 문제를 일으킬 소지가 너무큼!!