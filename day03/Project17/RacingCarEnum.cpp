#include <iostream>
using namespace std;

namespace CAR_CONST {	// CAR_CONST �̸� �����ȿ� ����ü Car�� ����ϴ� ������� ��� ��Ƴ��ҵ�.
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
										//ID_LEN�� ������ ���ؼ� �̸� ���� CAR_CONST�� �����ϰ� �ִ�. �̷��� �̸������� �����ؼ� �ڵ带 �ۼ��߱⿡, 
										//����� ��� �������� ����ǰ� ���Ǵ� ������� ���� �˼� �ִ�
	int fuelGauge;
	int curSpeed;

	void ShowCarstate() {
		cout << "������ ID : " << gamerID << endl;
		cout << "���ᷮ : " << fuelGauge<< "%" << endl;
		cout << "���� �ӵ� : " << curSpeed<<"km/s" << endl;
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