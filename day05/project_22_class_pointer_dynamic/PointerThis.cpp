#include <iostream>
#include <cstring>
using namespace std;

class SoSimple {

private:
	int num;

public:
	//SoSimple(int n) : num(n) {
	SoSimple(int num){
		this->num = num;	// ���ο� ������!!
		cout << "num = " << num <<", ";
		cout << "address  = " << this << endl;	// this�� ��ü �ڱ� �ڽ��� ����Ŵ
	}

	void ShowSimpleData() {

		cout << num << endl;
	}

	SoSimple* GetThisPointer() {

		return this;		// ��ü�� �����͸� ��ȯ�϶�!!
	}
};

int main(void) {

	SoSimple sim1(100);
	SoSimple* ptr1 = sim1.GetThisPointer();		// sim1 ��ü�� �ּҰ� ����
												// sim1�� ���� ��ȯ�� this�� ptr1�� ����
	cout << ptr1 << ", ";

	ptr1->ShowSimpleData();

	SoSimple sim2(200);
	SoSimple* ptr2 = sim2.GetThisPointer();		// sim2 ��ü�� �ּҰ� ����
	cout << ptr2 << ", ";

	ptr2->ShowSimpleData();

	return 0;
}