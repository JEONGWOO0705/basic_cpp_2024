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

	void Showdata() const {
		cout << "num : " << num << endl;
	}
};

int main(void) {
	const Sosimple obj(7);	// --->> ��ü�� const�� �����س����� const �ܿ� �Լ��� ������ �Ұ��ϴ�.
	// obj.Addnum(18);    ---->>>> const �Լ��� �ƴϹǷ� ������ �Ұ��ϴ�
	obj.Showdata();

	return 0;
}