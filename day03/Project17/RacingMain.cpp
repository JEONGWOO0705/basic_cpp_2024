#include "Car.h"

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