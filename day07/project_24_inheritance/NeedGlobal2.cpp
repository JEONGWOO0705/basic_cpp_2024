#include <iostream>
using namespace std;



class SoSimple {
private:
	static int simObjCnt;	// �Լ��� static �������� �Լ����� �Լ��� ������ ����� �� �ְ�, �������� ���ϴ��� ������� �ʴ´�.
							// --> ��ü���� ������ �����Ǵ� ���� �ƴ�!! �ϳ��� ������ ������ ���� ��ü�� �̿��ϴ� ����!
							// Ŭ���� ����� ��ü�� ��� ��밡��
public:
	SoSimple() {
		simObjCnt++;
		cout << simObjCnt << "��° SoSimple ��ü" << endl;

	}
};
int SoSimple::simObjCnt = 0;

class SoComplex {
private:
	static int cmsObjCnt;
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

int SoComplex::cmsObjCnt = 0;

int main(void) {
	SoSimple sim1;
	SoSimple sim2;

	SoComplex com1;
	SoComplex com2 = com1;
	SoComplex();	// �ӽ� ��ü

	return 0;
}