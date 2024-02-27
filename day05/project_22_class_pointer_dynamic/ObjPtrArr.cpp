/*
������ �迭 : �迭 --> �����͸� �����ϰ� �ִ� �迭

�迭 ������ : ������ --> �迭�� ����Ű�� ������ --> �迭�� �ּҸ� �����ϰ� �ִ� ������
*/
#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
	char* name;
	int age;

public:
	Person(char* myname, int myage) {		// ������ �����ε� ( ���� �̸����� �Ű� ���� �ٸ��� �����ϱ�!!)

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

		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}


	~Person() {
		delete[]name;
		cout << "called destructor!!" << endl;
	}
};

int main(void) {

	Person* parr[3];		// ��ü ������ �迭
	char namestr[100];
	int age;

	for (int i = 0; i < 3; i++) {

		cout << "�̸� : ";
		cin >> namestr;
		cout << "����: ";
		cin >> age;

		parr[i] = new Person(namestr, age);	// �������� ��ü�� ����
	}

	parr[0]-> ShowPersonInfo();		// ��ü �����͸� ������ ��� �Լ��� �����Ѵ�	( -> ) : �����͸� ������ ��� �Լ��� �����Ҷ�!!
	parr[1]->ShowPersonInfo();
	parr[2]->ShowPersonInfo();

	delete parr[0];
	delete parr[1];
	delete parr[2];

	return 0;
}