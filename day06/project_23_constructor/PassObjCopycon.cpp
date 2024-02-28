#include <iostream>
using namespace std;

class SoSimple {
private:
	int num;
public:
	SoSimple(int n) :num(n) {
		cout << "SoSimple(int n) ȣ��" << endl;
	}

	SoSimple(const SoSimple& copy) : num(copy.num) {

		cout << "Called SoSimple(const SoSimple & copy)" << endl;
	}

	void ShowData() {	// ��� �Լ�	--> ��ü�� �����ϰ� ����� �����ϴ�.
		cout << "num : " << num << endl;

	}
};

void SimpleFuncObj(SoSimple ob) { // ���� �Լ� --> ������ ���� ����
	// ���� �Լ����� simplefuncobj()�� ���� �Ǹ鼭 SoSimple Ŭ������ ob��� ��ü�� �����ǰ� ���� ������(�Լ�)�� ȣ���� �ȴ�
	ob.ShowData();
}

int main(void) {

	SoSimple obj(7);
	cout << "�Լ� ȣ�� ��" << endl;
	SimpleFuncObj(obj);	
	cout << "�Լ� ȣ�� ��" << endl;

	return 0;
}