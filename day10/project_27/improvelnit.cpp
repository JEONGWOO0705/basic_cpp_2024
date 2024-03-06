#include<iostream>
using namespace std;

class AAA {
private:
	int num;

public:
	AAA(int n = 0) : num(n) {
		cout << "AAA(int n = 0)" << endl;	// ���� �ϳ��� �Է����� ���� ������
	}

	AAA(const AAA& ref) :num(ref.num) {
		cout << "AAA(const AAA&ref)" << endl;		// ��ü �ϳ��� �Է����� ���� ������
													
	}

	AAA& operator= (const AAA& ref) {
		num = ref.num;
		cout << "operator = (const AAA& ref)" << endl;		// ���Կ����� �����ε�
		return *this;
	}
};

class BBB {
private:
	AAA mem;
public:
	BBB(const AAA& ref) : mem(ref) {}		// AAA mem = ref ��� �� �� �ִ�.
											// ��� �̴ϼȶ���� ���ؼ� �ʱ�ȭ
};

class CCC {
private:
	AAA mem;
public:
	CCC(const AAA& ref) {	// �������� ��ü �κп��� ���� ������ ���� �ʱ�ȭ�� �����ϸ� ����� �ʱ�ȭ�� ���� ������ ���忡�� �����ϴ� ���·� ���̳ʸ� �ڵ� ����
							// ���� ������ ���ؼ� �ʱ�ȭ
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