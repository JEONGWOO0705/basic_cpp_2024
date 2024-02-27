#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
	char* name;
	int age;

public:
	Person(const char* myname, int myage) {	// �Է��� 2���� ���� ������
		int len = strlen(myname) + 1;	//strlen() ������ ���̸� �޴� �Լ�,  +1�� �ϴ� ������ �ڿ� null���ڸ� �߰��Ͽ� ���ڿ��� ǥ�����ִ� ���̴�.
										// + 1�� ���ٸ� ���ڷ� �޾Ƶ��� --> "abc"�� �ƴ϶� 'a','b','c'�� �޾Ƶ���
		name = new char[len];	// ���ο� �޸� ���� �Ҵ� --> ,myname�� ���� +1 ��ŭ �޸� ������ name �� �Ҵ�
		strcpy(name, myname);	// �Ҵ�� name�� ������ myname�� ����Ǿ� �ִ� ���ڿ� "Lee dong woo"�� name�� ����
		age = myage;
	}

	void ShowPersonInfo() const {
		
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}

	~Person() {		// �Ҹ��� --> ���� ȣ���� �Ǵ� ���� �ƴ϶� �����ڰ� ����Ǹ� �˾Ƽ� ������ ��
		delete[]name;
		// delete []age; --> ������ �����̿�����
		cout << "called destructor ! " << endl;
	}
};


int main(void) {
	Person man1("Lee dong woo", 29);	// �μ� ����� ��ġ�ϴ� ������ " Person::Person"�� �ν��Ͻ��� �����ϴ�. --> Ŭ���� Person �Լ�(������)����
										// �Ű� ���� �����Ҷ� char * myname �տ� const �����ֱ�!!
	Person man2("Jang dong gun", 41);

	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;

}