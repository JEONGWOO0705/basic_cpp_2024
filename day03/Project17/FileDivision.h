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


class human {	//	 human Class
private:
	const char name[20];	// �Ӽ�: ��� ����(name, age, job)
	int age;
	char job[20];


public:
	void showHuman();
	

};	// ������ human ����ü�� Human���� ����ϰڴ�.
