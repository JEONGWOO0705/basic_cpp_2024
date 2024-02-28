#include <iostream>
using namespace std;

class  SoSimple {
private:
	int num;
public:
	SoSimple(int n) : num(n) {
		cout << "New Object : " << this << endl; // this 는 주소다
	}

	SoSimple(const SoSimple& copy) : num(copy.num) {

		cout << "New Copy obj : " << this << endl;
	}

	~SoSimple() {
		cout << "Destroy : " << this << endl;

	}
};

SoSimple SimpleFuncObj(SoSimple ob) {

	cout << "Parm ADR : " << &ob << endl;
	return ob;
}

int main(void) {

	SoSimple obj(7);
	SimpleFuncObj(obj);

	cout << endl;
	SoSimple tempRef = SimpleFuncObj(obj);
	cout << "Return Obj : " << &tempRef << endl;

	return 0;
}

// &은 변수의 메모리 주소값을 이야기 한다


/*
New Object : 000000F067EFF9C4			        31행 obj 생성  - 객체 obj주소
New Copy obj : 000000F067EFFAC4			        32행 함수 호출로 인한 23행의 매개 변수 ob생성  - 객체 ob주소
Parm ADR : 000000F067EFFAC4						25행 실행을 통해서	- 객체 ob주소
New Copy obj : 000000F067EFFB04					26행의 반환으로 인한 임시 객체 생성	- 임시객체 주소
Destroy : 000000F067EFFAC4						매개 변수 ob소멸		- 객체 ob소멸
Destroy : 000000F067EFFB04						26행 반환으로 생성된 임시 객체 소멸

New Copy obj : 000000F067EFFB24					매개변수 ob생성	-  ob객체 생성
Parm ADR : 000000F067EFFB24						25행의 실행 --> 매개변수 ob메모리 주소	- ob객체 주소
New Copy obj : 000000F067EFF9E4					26행 반환값 = 임시 객체 생성
Destroy : 000000F067EFFB24						매개변수 ob의 소멸
Return Obj : 000000F067EFF9E4					36행의 실행결과 임시객체의 주소값과 동일
Destroy : 000000F067EFF9E4						tempRef가 참조하는 임시객체 소멸
Destroy : 000000F067EFF9C4						31행의 obj 소멸
*/