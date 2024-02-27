/*
객체 배열
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human {

	char name[30];
	int age;

public:

	Human(const char * pname, int page) {
		
		cout << "생성자 호출" << endl;
		strcpy(name, pname);
		age = page;
	}

	void HumanInfo() {
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}

	~Human() {
		cout << "called destructor!!" << endl;

	}

};

int main(void) {

	Human h[3] = { Human("홍길동", 50), Human("황정우", 27), Human("이수지", 27) };	// 객체 배열
	
	for (int i = 0; i < 3; i++) {
		h[i].HumanInfo();
	}

	Human* h1 = new Human("가나다", 50);	// h1 이라는 포인트 객체에 new를 통해 정보가 담긴 주소를 저장한다
	h1->HumanInfo();						// ("가나다", 50) 정보가 담긴 포인트 객체 h1에서  ->를 통해 멤버함수 HumanInfo()에 접근한다.

	delete h1;

	return 0;
}