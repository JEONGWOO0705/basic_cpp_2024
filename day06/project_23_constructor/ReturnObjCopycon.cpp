#include <iostream>
using namespace std;

class SoSimple {
private:
	int num;
public:
	SoSimple(int n) : num(n) {
		cout << "SoSimple(int n) ȣ��" << endl;

	} 
	SoSimple(const SoSimple& copy) : num(copy.num) {

		cout << "Called SoSimple(const SoSimple & copy)" << endl;
	}

	SoSimple& AddNum(int n) {

		num += n;
		return *this;
	}
	void ShowData() {
		cout << "num : " << num << endl;
	}
};

SoSimple SimpleFuncobj(SoSimple ob) {	// ����� Ÿ���� Ŭ���� ��ü �̱� ������ �Լ� �̸� �տ� class�̸��� ������!!

	cout << "return ����" << endl;
	return ob;	// �ӽ� ��ü�� �����ȴ�!!!! �ӽð�ü�� ���ϵ� ob�� ������� ���� ob�� �����Ѵ�. �� ������ ���� �����ڰ� ȣ���� �ȴ�.
}

int main(void) {
	SoSimple obj(7);
	SimpleFuncobj(obj).AddNum(30).ShowData();	// obj�� �ƴ� obj�� ���縦 �ؼ� ������� ��ü�� ob�� ShowData()�̴�!!
	obj.ShowData();

	return 0;
}