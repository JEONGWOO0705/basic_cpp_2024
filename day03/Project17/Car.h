#pragma once
#ifndef __CAR_H__
#define __CAR_H__

namespace CAR_CONST {
	enum {	// 열거형
		ID_LEN = 20, MAX_SPD = 200, FUEL_STEP = 2,
		ACC_STEP = 10, BRK_STEP = 10
	};
}

class Car {
private:
	//============멤버 변수(필드), 속성==========
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

	//========멤버 함수(메서드), 기능===========
public:
	void InitMembers(const char* ID, int fuel);
	void ShowCarState();	// 상태정보 출력
	void Accel();			// 엑셀, 속도 증가
	void Break();			//브레이크 , 속도 감소
};

#endif // !__CAR_H__
