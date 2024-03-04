#include<iostream>
using namespace std;

class Person {
public:
	void Sleep() {
		cout << "Sleep" << endl;
	}
};

class Student : public Person {
public:
	void Study() {
		cout << "Study" << endl;

	}
};

class PartTimeStudent : public Student {
public:
	void Work() {
		cout << "Work" << endl;
	}
};

int main(void) {
	Person* ptr = new Person(); // �̰��� ���� ����!! // ��Ģ�� ������ Ÿ������ ����ϴ� ���� ��Ģ
	/*
	�θ�Ÿ���� ��ü �����ͷ� �ڽ� ��ü�� ����ų �� �ִ�.
	������ �ڽ� Ÿ���� ��ü �����ͷ� �θ� ��ü�� ����ų �� ����.
	�׸��� ������ ��ü �������� Ÿ���� ������.
	*/
	Person* ptr1 = new Student();
	Person* ptr2 = new PartTimeStudent();
	Student* ptr3 = new PartTimeStudent();



	ptr->Sleep();
	ptr1->Sleep(); // ptr1 ��ü�� Person Ŭ������ ����Ű�Ƿ� �θ� Ŭ������ Person Ŭ������ ��� �Լ��� ����� �� �ִ�.
	ptr2->Sleep();
	ptr3->Study();

	delete ptr1;
	delete ptr2;
	delete ptr3;

	return 0;
}