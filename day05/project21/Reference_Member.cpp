﻿#include <iostream>
using namespace std;

class AAA {
public:
	AAA() {
		cout << "empty object" << endl;
	}

	void ShowYourName() {
		cout << "I'm class AAA" << endl;
	}
};

class BBB {
private:
	AAA &ref;
	const int& num;

public:
	BBB(AAA& r, const int& n)
		:ref(r), num(n) //멤버 이니셜라이즈
	{
		//empty constructor body
	}

	void ShowYourName() {
		ref.ShowYourName();
		cout << "and" << endl;
		cout << "I'm ref num" << num << endl;
	}
};

int main(void) {
	AAA obj1;
	BBB obj2(obj1, 20);
	obj2.ShowYourName();
	return 0;
}

/*
생성자(클래스 이름과 같은 멤버함수로 출력은 없다)
: 객체 생성시 자동으로 호출되는 멤버함수
: 모든 클래스는 디폴트 생성자를 가지고 있다.
: 만약 명시적으로 생성자를 작성하면 디폴트 생성자의 호출은 불가하며, 
	디폴트 생성자가 필요한 경우는 명시적으로 작성한다.
: 멤버 변수들의 초기화를 담당한다.


멤버 이니셜라이즈
: 객체 생성전에 선언과 동시에 초기화가 필요한 경우에 사용한다.
: const변수와 참조 변수의 초기화에 사용
*/	
