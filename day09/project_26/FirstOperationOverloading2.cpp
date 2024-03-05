#include<iostream>
using namespace std;

class First {
private:
	int num1, num2;
public:
	First(int n1 = 0, int n2 = 0) : num1(n1), num2(n2) {
		cout << "First ������" << endl;
	}

	void ShowData() {
		cout << num1 << ", " << num2 << endl;
	}
};

class Second {
private:
	int num3, num4;
public:
	Second(int n3 = 0, int n4 = 0) : num3(n3), num4(n4) { cout << "second ������" << endl; }
	
	void ShowData() {
		cout << num3 << ", " << num4 << endl;
	}

	Second& operator=(const Second& ref) {
		cout << "Second& operator = ()" << endl;
		num3 = ref.num3;
		num4 = ref.num4;
		return *this;
	}

};

int main() {
	First f1(111, 222);
	First f2;

	Second s1(333, 444);
	Second s2;

	f2 = f1;	// ����Ʈ ���� ������ ȣ��	; ����Ʈ ���� �����ڿ� ����ϴ�.
	s2 = s1;	//	Second& operator ���� ������ ȣ��

	f2.ShowData();
	s2.ShowData();

	First fob1, fob2;
	Second sob1, sob2;

	fob1 = fob2 = f1;	// First class�� ����Ʈ ���� ������ 2�� ȣ��
	sob1 = sob2 = s1;	// Second class�� ���� ������ �ι� ȣ��

	fob1.ShowData();
	fob2.ShowData();
	sob1.ShowData();
	sob2.ShowData();

	return 0;

}