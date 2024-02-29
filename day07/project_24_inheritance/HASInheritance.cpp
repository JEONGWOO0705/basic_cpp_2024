#include <iostream>
#include <cstring>
using namespace std;

class Gun {
protected:
	int bullet;	//장전된 총알의 수

public:
	Gun(int bnum) : bullet(bnum) {}
	void Shot() {
		cout << "BBANG" << endl;
		bullet--;
		
	}
	/*
	int getbullet(){
		return bullet;
	*/
};

class Police : public Gun {
private:
	int handcuffs;	//소유한 수갑의 수
public:
	Police(int bnum, int bcuff) :Gun(bnum), handcuffs(bcuff) {}

	void PutHandcuff() {	
		cout << "SNAP" << endl;
		handcuffs--;
		

	}

	void state() {
		cout << "총알의 수 : " << bullet /* getbullet()  함수로 만들어서 하는 방법도 있음!!*/ << endl;		
		// Gun(부모클래스)에서 변수를 private으로 선언하면 변수를 자식 클래스에서 쓸수없음
		// 부모클래스의 변수를 쓰기 위해서 변수 선언을 protected로 선언한다
		cout << "수갑의 수 : " << handcuffs << endl;
	}
};

int main(void) {
	Police pman(5, 3);
	pman.state();
	pman.Shot();
	pman.PutHandcuff();
	pman.state();

	return 0;
}