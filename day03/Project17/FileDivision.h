#pragma once

/*
	FileDivision.h 헤더파일 : 클래스 선언
*/

class AClass {
private:				// 변수에는 private !! (생략 가능)
	int num;

public:					
	AClass(int anum);

	void Alnfo();
};


// 생성자를 만들어서 잘해보자


class Human{
private:
	char name[20];
	char job[10];
	int age;

public:
	Human(const char* mname, const char* mjob, int mage);	// 헤더 파일에서 굳이 {} 안함 ..? 매개변수만 설정하고 바로 ;로 끝내버리기!!

	void ShowProfile();

};	// 앞으로 human 구조체를 Human으로 사용하겠다.
