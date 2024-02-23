#include <iostream>
using namespace std;

namespace CAR_CONST {	// CAR_CONST 이름 공간안에 구조체 Car에 사용하는 상수들을 모두 모아놓았따.
	enum {
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

struct Car {
	char gamerID[CAR_CONST::ID_LEN];	// char gameID[20]
										//ID_LEN의 접근을 위해서 이름 공간 CAR_CONST를 지정하고 있다. 이렇듯 이름공간을 지정해서 코드를 작성했기에, 
										//상수가 어느 영역에서 선언되고 사용되는 상수인지 쉽게 알수 있다
	int fuelGauge;
	int curSpeed;

	void ShowCarstate() {
		cout << "소유자 ID : " << gamerID << endl;
		cout << "연료량 : " << fuelGauge<< "%" << endl;
		cout << "현재 속도 : " << curSpeed<<"km/s" << endl;
	}

	void Accel() {
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

	void Break() {
		if (curSpeed < CAR_CONST::BRK_STEP) {

			curSpeed = 0;
			return;
		}
		curSpeed -= CAR_CONST::BRK_STEP;
	}
};

int main(void) {
	Car run99 = { "run99", 100, 0 };
	run99.Accel();
	run99.Accel();
	run99.ShowCarstate();
	run99.Break();
	run99.ShowCarstate();

	Car sped77 = { "sped77", 100, 0 };
	sped77.Accel();
	sped77.Break();
	sped77.ShowCarstate();
	return 0;
}