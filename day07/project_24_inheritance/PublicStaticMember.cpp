#include <iostream>
using namespace std;

class SoSimple {
public:
	static int simObjCnt;		// static������� ����(Ŭ���� ���)
public:
	SoSimple() {
		simObjCnt++;
	}
};
int SoSimple :: simObjCnt= 0;

int main(void) {
	cout << SoSimple::simObjCnt << "��° Sosimple ��ü" << endl;	//Ŭ���� �̸����� static����� ���ٰ���
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "��° Sosimple ��ü" << endl;
	cout << sim1.simObjCnt << "��° SoSimple ��ü" << endl;
	cout << sim2.simObjCnt << "��° SoSimple ��ü" << endl;

	return 0;
}
// ��ü ���� simObjCnt --> static��������� �����ϰ� �ִ�.(static��������� ��ü���� �������� ������ ����)
// public���� ����� static����� �̷������� ��𼭵� ������ �����ϴ�.


//static ����Լ� �������� static ��� ������ static����Լ��� ȣ���� �����ϴ�.