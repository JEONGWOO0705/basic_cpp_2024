#include <iostream>
using namespace std;

class SimpleClass {
private:
	int num1;
	int num2;

public:
	SimpleClass() {	//1
		num1 = 0;
		num2 = 0;
	}
	// ����Ʈ �����ڸ� ����� ��� �����ڸ� �θ��� 2�� 3�� �Ű� ���� ȣ�� ���� ���� 1�� ������(����Ʈ ������)�� ȣ���� ��� ������ �߻�!!!

	SimpleClass(int n) {	//2
		num1 = n;
		num2 = 0;
	}
	SimpleClass(int n1, int n2) {	//3
		num1 = n1;
		num2 = n2;
	}

	/*
	SimpleClass(int n1 = 0, int n2 = 0){
		num1 = n1
		num2 = n2
	}
	*/
	void ShowDada() const {
		cout << num1 << ' ' << num2 << endl;
	}
};


int main(void) {
	SimpleClass sc1;
	sc1.ShowDada();

	SimpleClass sc2(100);
	sc2.ShowDada();

	SimpleClass sc3(100, 200);
	sc3.ShowDada();
}