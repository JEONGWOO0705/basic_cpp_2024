#include <iostream>
#include <cstring>
using namespace std;

class SoSimple {

private:
	int num;

public:
	//SoSimple(int n) : num(n) {
	SoSimple(int num){
		this->num = num;	// 에로우 연산자!!
		cout << "num = " << num <<", ";
		cout << "address  = " << this << endl;	// this는 객체 자기 자신을 가르킴
	}

	void ShowSimpleData() {

		cout << num << endl;
	}

	SoSimple* GetThisPointer() {

		return this;		// 객체의 포인터를 반환하라!!
	}
};

int main(void) {

	SoSimple sim1(100);
	SoSimple* ptr1 = sim1.GetThisPointer();		// sim1 객체의 주소값 저장
												// sim1에 의해 반환된 this를 ptr1에 저장
	cout << ptr1 << ", ";

	ptr1->ShowSimpleData();

	SoSimple sim2(200);
	SoSimple* ptr2 = sim2.GetThisPointer();		// sim2 객체의 주소값 저장
	cout << ptr2 << ", ";

	ptr2->ShowSimpleData();

	return 0;
}