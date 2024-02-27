#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
	char* name;
	int age;

public:
	Person(const char* myname, int myage) {	// 입력을 2개를 갖는 생성자
		int len = strlen(myname) + 1;	//strlen() 문자의 길이를 받는 함수,  +1를 하는 이유는 뒤에 null문자를 추가하여 문자열을 표시해주는 것이다.
										// + 1이 없다면 문자로 받아들임 --> "abc"가 아니라 'a','b','c'로 받아들임
		name = new char[len];	// 새로운 메모리 공간 할당 --> ,myname의 길이 +1 만큼 메모리 공간을 name 에 할당
		strcpy(name, myname);	// 할당된 name의 공간에 myname에 저장되어 있는 문자열 "Lee dong woo"를 name에 복사
		age = myage;
	}

	void ShowPersonInfo() const {
		
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}

	~Person() {		// 소멸자 --> 따로 호출이 되는 것이 아니라 생성자가 실행되면 알아서 실행이 됨
		delete[]name;
		// delete []age; --> 포인터 형식이여야함
		cout << "called destructor ! " << endl;
	}
};


int main(void) {
	Person man1("Lee dong woo", 29);	// 인수 목록이 일치하는 생성자 " Person::Person"의 인스턴스가 없습니다. --> 클래스 Person 함수(생성자)에서
										// 매개 변수 선언할때 char * myname 앞에 const 붙혀주기!!
	Person man2("Jang dong gun", 41);

	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;

}