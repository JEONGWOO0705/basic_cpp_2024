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


class human {	//	 human Class
private:
	const char name[20];	// 속성: 멤버 변수(name, age, job)
	int age;
	char job[20];


public:
	void showHuman();
	

};	// 앞으로 human 구조체를 Human으로 사용하겠다.
