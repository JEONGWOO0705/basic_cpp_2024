#include <iostream>
using namespace std;

class SoSimple {
private:
	int num;
public:
	SoSimple(int n) : num(n) {
		cout << "SoSimple(int n) 호출" << endl;

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

SoSimple SimpleFuncobj(SoSimple ob) {	// 출력의 타입이 클래스 객체 이기 때문에 함수 이름 앞에 class이름을 붙힌다!!

	cout << "return 이전" << endl;
	return ob;	// 임시 객체가 생성된다!!!! 임시객체가 리턴된 ob가 사라지기 전에 ob를 복사한다. 이 시점에 복사 생성자가 호출이 된다.
}

int main(void) {
	SoSimple obj(7);
	SimpleFuncobj(obj).AddNum(30).ShowData();	// obj가 아닌 obj를 복사를 해서 만들어진 객체인 ob의 ShowData()이다!!
	obj.ShowData();

	return 0;
}