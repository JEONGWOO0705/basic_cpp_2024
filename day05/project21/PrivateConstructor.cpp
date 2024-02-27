#include <iostream>
using namespace std;

class AAA {
private:
	int num;

public:
	AAA() : num(0) {}
	AAA& CreateInitObj(int n) const {
		
		AAA* ptr = new AAA(n);	// �� ������ new�� ���� ��ü ����	 AAA(int n) --> private�� ����� ��� �Լ� ȣ��
		return *ptr;
	}

	void ShowNum() const {
		cout << num << endl;
	}

private:	// �̱��� --> ��ü�� �ѹ��� ���� (private�ȿ� ������ �Լ�) --> �ܺο��� ��ü ���� ���� 
			// -->	���ο��� ��ü �����ϰ� �ϴ� �Լ� --> AAA& CreateInitObj(int n) const
	AAA(int n) :num(n) {}
};

int main(void) {
	AAA base;
	base.ShowNum();

	AAA& obj1 = base.CreateInitObj(3);	// AAAŸ���� �������� ����
	obj1.ShowNum();

	AAA& obj2 = base.CreateInitObj(12);	// obj1 , obj2�� �ٸ� ����!!
	obj2.ShowNum();	 

	// base.CreateInitObj(4);
	// base.ShowNum();	--> 0�� ����.

	delete& obj1;
	delete& obj2;

	return 0;

}