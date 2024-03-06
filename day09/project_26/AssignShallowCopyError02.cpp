#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
	char* name;
	int age;

public:
	Person(const char* myname, int myage) : age(myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
	}

	Person& operator= (const Person& ref) {
		delete []name;	// 메모리의 누수를 막기위한 메모리 해제 연산
						// man2에 저장되어 있던 yoon이라는 이름을 삭제
						// 후에 man1에 저장되어 있는 Lee라는 이름을 복사
		int len = strlen(ref.name) + 1;
		name = new char[len];
		strcpy(name, ref.name);
		age = ref.age;
		return *this;
	}


	void ShowPersonInfo() const {
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;

	}

	~Person() {
		delete[]name;
		cout << "called destructor" << endl;
	}
};

int main(void) {
	Person man1("Lee", 29);
	Person man2("Yoon", 22);

	man2 = man1;

	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}