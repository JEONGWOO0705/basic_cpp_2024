#include<iostream>
using namespace std;

/*
	��������� : ��ü�� �����Ҷ� ȣ���ϴ� ������
				 ���� ������ ��ü�� �Է����� ������ �ϴµ�
				 �̶� ���� ��ü�� ������ �Է����� �޴´�.
*/

class A {
public:
	A() {
		cout << "����Ʈ ������ ȣ��" << endl;
	}
	A(int n) {
		cout << "A(int n) ������ ȣ��" << endl;
	}

	A(const A& r) {	// ���� ���°� �ƴϸ� ������ ���� �����ڰ� ȣ���̵ȴ�!!
		cout << "A (const A &r) ���� ������ ȣ��" << endl;
	}
};

int main(void) {

	A obj1;			// ����Ʈ ������

	A obj2(10);		// �Է� �ϳ� ������ ������ ȣ��

	A obj3(obj2);	// ���� ������ ȣ��
	return 0;
}