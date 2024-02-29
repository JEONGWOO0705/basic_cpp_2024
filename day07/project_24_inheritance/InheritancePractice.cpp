#include<iostream>
#include<cstring>
using namespace std;

class Myclass {
private:
	char name[30];
	int age;

public:
	Myclass(const char* myname, int myage) :age(myage) {
		strcpy(name, myname);
	}
	string ShowName() {
		return name;
	}
	int ShowAge() {
		return age;
	}

};

class MyInfo : public Myclass {
private:
	char pNumber[20];
public:
	MyInfo(const char* myname, int myage, const char* mypNumber) : Myclass(myname, myage) {
		strcpy(pNumber, mypNumber);
	}

	void printMyInfo() {
		cout << "나의 이름은 " << ShowName() << " 이고, 나이는 " << ShowAge() << "이며, 전화번호는 " << pNumber << "입니다" << endl;
	}

};

int main(void) {
	MyInfo hw("황정우", 27, "010-8790-2932");
	hw.printMyInfo();

	return 0;
}