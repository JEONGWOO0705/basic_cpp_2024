/*
��ü �迭
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human {

	char name[30];
	int age;

public:

	Human(const char * pname, int page) {
		
		cout << "������ ȣ��" << endl;
		strcpy(name, pname);
		age = page;
	}

	void HumanInfo() {
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}

	~Human() {
		cout << "called destructor!!" << endl;

	}

};

int main(void) {

	Human h[3] = { Human("ȫ�浿", 50), Human("Ȳ����", 27), Human("�̼���", 27) };	// ��ü �迭
	
	for (int i = 0; i < 3; i++) {
		h[i].HumanInfo();
	}

	Human* h1 = new Human("������", 50);	// h1 �̶�� ����Ʈ ��ü�� new�� ���� ������ ��� �ּҸ� �����Ѵ�
	h1->HumanInfo();						// ("������", 50) ������ ��� ����Ʈ ��ü h1����  ->�� ���� ����Լ� HumanInfo()�� �����Ѵ�.

	delete h1;

	return 0;
}