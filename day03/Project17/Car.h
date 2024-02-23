#pragma once
#ifndef __CAR_H__
#define __CAR_H__

namespace CAR_CONST {
	enum {	// ������
		ID_LEN = 20, MAX_SPD = 200, FUEL_STEP = 2,
		ACC_STEP = 10, BRK_STEP = 10
	};
}

class Car {
private:
	//============��� ����(�ʵ�), �Ӽ�==========
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

	//========��� �Լ�(�޼���), ���===========
public:
	void InitMembers(const char* ID, int fuel);
	void ShowCarState();	// �������� ���
	void Accel();			// ����, �ӵ� ����
	void Break();			//�극��ũ , �ӵ� ����
};

#endif // !__CAR_H__