#include "Car.h"

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