#include <iostream>
using namespace std;

class AAA {
private:
	int num;

public:
	AAA() : num(0) {}
	AAA& CreateInitObj(int n) const {
		
		AAA* ptr = new AAA(n);	// 힙 영역에 new를 통해 객체 생성	 AAA(int n) --> private에 선언된 멤버 함수 호출
		return *ptr;
	}

	void ShowNum() const {
		cout << num << endl;
	}

private:	// 싱글톤 --> 객체를 한번만 생성 (private안에 생성된 함수) --> 외부에서 객체 생성 막음 
			// -->	내부에서 객체 생성하게 하는 함수 --> AAA& CreateInitObj(int n) const
	AAA(int n) :num(n) {}
};

int main(void) {
	AAA base;
	base.ShowNum();

	AAA& obj1 = base.CreateInitObj(3);	// AAA타입의 참조변수 선언
	obj1.ShowNum();

	AAA& obj2 = base.CreateInitObj(12);	// obj1 , obj2는 다른 변수!!
	obj2.ShowNum();	 

	// base.CreateInitObj(4);
	// base.ShowNum();	--> 0이 나옴.

	delete& obj1;
	delete& obj2;

	return 0;

}