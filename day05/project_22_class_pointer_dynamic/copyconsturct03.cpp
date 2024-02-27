#include<iostream>
using namespace std;


class AA {
	int a;
	int b;
public:
	AA(int a, int b) {
		this->a = a;
		this->b = b;

	}

	AA(const AA &ref) {

		this->a = ref.a;		// 복사 생성자를 생성할때는 꼭 초기화 하기!!
								// 이니셜라이즈도 가능!!
		this->b = ref.b;

		cout << "복사 생성자 호출 !!" << endl;
	}



	void AAInfo() {
		cout << a << "  " << b << endl;

	}

	~AA() {
		cout << "소멸자 호출" << endl;
	}

	
};

int main(void) {

	AA obj1(10, 20);
	obj1.AAInfo();

	AA obj2(obj1);
	obj2.AAInfo();

	return 0;
}