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
		cout << "���� �̸��� " << ShowName() << " �̰�, ���̴� " << ShowAge() << "�̸�, ��ȭ��ȣ�� " << pNumber << "�Դϴ�" << endl;
	}

};

int main(void) {
	MyInfo hw("Ȳ����", 27, "010-8790-2932");
	hw.printMyInfo();

	return 0;
}