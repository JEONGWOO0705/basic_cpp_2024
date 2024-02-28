#include <iostream>
using namespace std;

class Sosimple {
private:
	int num;
public:
	Sosimple(int n) :num(n) {}

	Sosimple& Addnum(int n) {
		num += n;
		return *this;
	}

	void SimpleFunc() {
		cout << "SimpleFunc : " << num << endl;
	}

	void SimpleFunc() const {
		cout << "const SimpleFunc : " << num << endl;
	}
};

void YourFunc(const Sosimple& obj) {	// �� �Լ��� ���޵Ǵ� ���ڸ� �����ڷ�, �װ͵� const�����ڷ� �޴´�
										// �׷��� 26���� �Լ� ȣ�� ����� 19���� const ��� �Լ��� ȣ��ȴ�.
	obj.SimpleFunc();
}

int main(void) {
	Sosimple obj1(2);
	const Sosimple obj2(7);

	obj1.SimpleFunc();
	obj2.SimpleFunc();

	YourFunc(obj1);
	YourFunc(obj2);

	return 0;
}