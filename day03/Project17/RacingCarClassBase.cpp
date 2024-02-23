#include <iostream>
#include <cstring>
using namespace std;

// new/delete은 힙영역과 관련

namespace CAR_CONST {	// CAR_CONST 이름 공간안에 구조체 Car에 사용하는 상수들을 모두 모아놓았따.
	enum {	// 열거형
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

struct Car {

private:
	//============멤버 변수(필드), 속성==========
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

	//========멤버 함수(메서드), 기능===========
public:
	void InitMembers(const char * ID, int fuel);
	void ShowCarState();	// 상태정보 출력
	void Accel();			// 엑셀, 속도 증가
	void Break();			//브레이크 , 속도 감소
};

void Car::InitMembers(const char* ID, int fuel) {
	strcpy(gamerID, ID);	// errir type : C4996	--> sdl 검사 아니오로 하기!!
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car::ShowCarState() {
	cout << "소유자 ID : " << gamerID << endl;
	cout << "연료량 : " << fuelGauge << "%" << endl;
	cout << "현재 속도 : " << curSpeed << "km/s" << endl;
}

void Car::Accel() {
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;

	if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD) {

		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}

	curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break() {
	if (curSpeed < CAR_CONST::BRK_STEP) {

		curSpeed = 0;
		return;
	}
	curSpeed -= CAR_CONST::BRK_STEP;
}


int main(void) {
	Car run99;	// class car 타입의 객체 run 99 생성
	run99.InitMembers("run99", 100);	// run 99 객체의 InitMembers()메서드 호출
	run99.Accel();						// 
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();
	return 0;
}