#include <iostream>
using namespace std;

class SoSimple {
public:
	static int simObjCnt;		// static멤버변수 선언(클래스 멤버)
public:
	SoSimple() {
		simObjCnt++;
	}
};
int SoSimple :: simObjCnt= 0;

int main(void) {
	cout << SoSimple::simObjCnt << "번째 Sosimple 객체" << endl;	//클래스 이름으로 static멤버에 접근가능
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "번째 Sosimple 객체" << endl;
	cout << sim1.simObjCnt << "번째 SoSimple 객체" << endl;
	cout << sim2.simObjCnt << "번째 SoSimple 객체" << endl;

	return 0;
}
// 객체 없이 simObjCnt --> static멤버변수에 접근하고 있다.(static멤버변수가 객체내에 존재하지 않음을 증명)
// public으로 선언된 static멤버는 이런식으로 어디서든 접근이 가능하다.


//static 멤버함수 내에서는 static 멤버 변수와 static멤버함수만 호출이 가능하다.