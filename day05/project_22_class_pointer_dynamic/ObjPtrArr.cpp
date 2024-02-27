/*
포인터 배열 : 배열 --> 포인터를 저장하고 있는 배열

배열 포인터 : 포인터 --> 배열을 가르키는 포인터 --> 배열의 주소를 저장하고 있는 포인터
*/
#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
	char* name;
	int age;

public:
	Person(char* myname, int myage) {		// 생성자 오버로딩 ( 같은 이름에서 매개 변수 다르게 설정하기!!)

		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	Person() {

		name = NULL;
		age = 0;
		cout << "called Person()" << endl;

	}

	void SetPersonInfo(char* myname, int myage) {

		name = myname;
		age = myage;

	}

	void ShowPersonInfo() const {

		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}


	~Person() {
		delete[]name;
		cout << "called destructor!!" << endl;
	}
};

int main(void) {

	Person* parr[3];		// 객체 포인터 배열
	char namestr[100];
	int age;

	for (int i = 0; i < 3; i++) {

		cout << "이름 : ";
		cin >> namestr;
		cout << "나이: ";
		cin >> age;

		parr[i] = new Person(namestr, age);	// 힙영역에 객체를 생성
	}

	parr[0]-> ShowPersonInfo();		// 객체 포인터를 가지고 멤버 함수에 접근한다	( -> ) : 포인터를 가지고 멤버 함수에 접근할때!!
	parr[1]->ShowPersonInfo();
	parr[2]->ShowPersonInfo();

	delete parr[0];
	delete parr[1];
	delete parr[2];

	return 0;
}