#include <iostream>

class AClass {
private:				// �������� private !! (���� ����)
	int num;

public:					// ���� ���� ������
	AClass(int anum) {	// ������ : �ʱ�ȭ ���
		num = anum;
	}

	void Alnfo() {
		std::cout << "A::num" << num << std::endl;
	}
};

int main() {

	AClass a(10);	// a��� ��ü�� �����ϸ鼭 AClass �Լ��� 10�� �־�� --> 8�� ������ �Լ��� ȣ���

	a.Alnfo();
	return 0;
}