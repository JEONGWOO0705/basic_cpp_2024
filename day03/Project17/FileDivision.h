#pragma once

/*
	FileDivision.h ������� : Ŭ���� ����
*/

class AClass {
private:				// �������� private !! (���� ����)
	int num;

public:					
	AClass(int anum);

	void Alnfo();
};


// �����ڸ� ���� ���غ���


class Human{
private:
	char name[20];
	char job[10];
	int age;

public:
	Human(const char* mname, const char* mjob, int mage);	// ��� ���Ͽ��� ���� {} ���� ..? �Ű������� �����ϰ� �ٷ� ;�� ����������!!

	void ShowProfile();

};	// ������ human ����ü�� Human���� ����ϰڴ�.
