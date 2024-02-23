#include <iostream>
#include <cstring>
using namespace std;

// new/delete�� �������� ����

namespace CAR_CONST {	// CAR_CONST �̸� �����ȿ� ����ü Car�� ����ϴ� ������� ��� ��Ƴ��ҵ�.
	enum {	// ������
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

struct Car {

private:
	//============��� ����(�ʵ�), �Ӽ�==========
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

	//========��� �Լ�(�޼���), ���===========
public:
	void InitMembers(const char * ID, int fuel);
	void ShowCarState();	// �������� ���
	void Accel();			// ����, �ӵ� ����
	void Break();			//�극��ũ , �ӵ� ����
};

void Car::InitMembers(const char* ID, int fuel) {
	strcpy(gamerID, ID);	// errir type : C4996	--> sdl �˻� �ƴϿ��� �ϱ�!!
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car::ShowCarState() {
	cout << "������ ID : " << gamerID << endl;
	cout << "���ᷮ : " << fuelGauge << "%" << endl;
	cout << "���� �ӵ� : " << curSpeed << "km/s" << endl;
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
	Car run99;	// class car Ÿ���� ��ü run 99 ����
	run99.InitMembers("run99", 100);	// run 99 ��ü�� InitMembers()�޼��� ȣ��
	run99.Accel();						// 
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();
	return 0;
}