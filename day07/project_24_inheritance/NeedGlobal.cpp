#include <iostream>
using namespace std;

int simObjCnt = 0;
int cmsObjCnt = 0;

class SoSimple {
public:
	SoSimple() {
		simObjCnt++;
		cout << simObjCnt << "��° SoSimple ��ü" << endl;

	}
};

class SoComplex {
public:
	SoComplex() {
		cmsObjCnt++;

		cout << cmsObjCnt << "��° SoComplex ��ü" << endl;

	}

	SoComplex(SoComplex& copy) {
		cmsObjCnt++;
		cout << cmsObjCnt << "��° SoComplex ��ü" << endl;

	}
};

int main(void) {
	SoSimple sim1;
	SoSimple sim2;

	SoComplex com1;
	SoComplex com2 = com1;
	SoComplex();	// �ӽ� ��ü

	return 0;
}

// simObjCnt, cmsObjCnt�� �������� �̹Ƿ� ������ ����ų ������ �ʹ�ŭ!!