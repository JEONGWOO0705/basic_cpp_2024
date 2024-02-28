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
	const Sosimple obj(7);	// --->> 객체를 const로 지정해놓으면 const 외에 함수는 접근이 불가하다.
	// obj.Addnum(18);    ---->>>> const 함수가 아니므로 접근이 불가하다
	obj.Showdata();

	return 0;
}