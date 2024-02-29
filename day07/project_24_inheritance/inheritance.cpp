#include<iostream>
using namespace std;

class Person {

private:
	int age;
	char name[50];

public:
	Person(int myage, const char* myname) : age(myage) {
		cout << "부모 생성자 실행" << endl;
		strcpy(name, myname);
	}

	void WhatYourName() const {
		cout << "My name is " << name << endl;
	}

	void HowOldAreYou() const {

		cout << "I am " << age << " years old" << endl;
	}

};

class UnivStudent : public Person {// 클래스의 상속을 의미함	

private:
	string major;

public:
	UnivStudent(const char* myname, int myage, const char* mymajor) :Person(myage, myname) {
		cout << "자식 생성자 실행" << endl;
		major = mymajor;
	}

	void WhoAreYou() const {
		WhatYourName();
		HowOldAreYou();

		cout << "My major is " << major << endl << endl;
	}
};

int main(void) {

	UnivStudent s("황정우", 27, "전자공학");
	s.WhoAreYou();

	return 0;
}