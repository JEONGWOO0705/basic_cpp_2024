#include<iostream>
using namespace std;

class Person {

private:
	int age;
	char name[50];

public:
	Person(int myage, const char* myname) : age(myage) {
		cout << "�θ� ������ ����" << endl;
		strcpy(name, myname);
	}

	void WhatYourName() const {
		cout << "My name is " << name << endl;
	}

	void HowOldAreYou() const {

		cout << "I am " << age << " years old" << endl;
	}

};

class UnivStudent : public Person {// Ŭ������ ����� �ǹ���	

private:
	string major;

public:
	UnivStudent(const char* myname, int myage, const char* mymajor) :Person(myage, myname) {
		cout << "�ڽ� ������ ����" << endl;
		major = mymajor;
	}

	void WhoAreYou() const {
		WhatYourName();
		HowOldAreYou();

		cout << "My major is " << major << endl << endl;
	}
};

int main(void) {

	UnivStudent s("Ȳ����", 27, "���ڰ���");
	s.WhoAreYou();

	return 0;
}