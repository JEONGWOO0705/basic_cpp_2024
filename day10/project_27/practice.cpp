#include<iostream>
#include <cstring>
using namespace std;

class Grade {
private:
	char* name;
	int kr;
	int math;
	int english;

public:

	Grade(const char* mname, int mkr, int mmath, int menglish) : kr(mkr), math(mmath), english(menglish) {
		int len = strlen(mname) + 1;
		name = new char[len];
		strcpy(name, mname);
	}

	~Grade() {
		delete[] name;
	}

	void ShowStudentInfo() {
		cout << "�л� �̸� : " << name << endl;
		cout << "���� ���� : " << kr << endl;
		cout << "���� ���� : " << math << endl;
		cout << "���� ���� : " << english << endl;
		cout << "���� : " << Sum(kr, math, english) << endl;
		cout << "��� : " << Average(kr, math, english) << endl;
	}

	int Sum(int mkr, int mmath, int menglish) {
		int sum;
		sum = mkr + mmath + menglish;
		return sum;
	}

	int Average(int mkr, int mmath, int menglish) {
		int average;
		average = (mkr + mmath + menglish) / 3;
		return average;
	}
	
};


int main() {
	char mname[100];
	int mkr, mmath, menglish;

	for (int i = 0; i < 5; i++) {

		cout << "�̸��� �Է��ϼ��� : " << endl;
		cin.getline(mname, 100);

		cout << "���� ������ �Է��ϼ��� : " << endl;
		cin >> mkr;

		cout << "���� ������ �Է��ϼ��� : " << endl;
		cin >> mmath;

		cout << "���� ������ �Է��ϼ��� : " << endl;
		cin >> menglish;

		cin.ignore();

		Grade student(mname, mkr, mmath, menglish);
		student.ShowStudentInfo();
	}

	/*
	�� �ڵ忡�� �� ��° �л��� �̸��� �Է¹��� �� ������ �߻��ϴ� ������ cin�� getline()�� ȥ���Ͽ� ����� �� �߻��� �� �ִ� ���� �����Դϴ�.

	cin�� �Է� ���ۿ��� ���� ����('\n')�� ����µ�, getline()�� ���� ���ڸ� ���ڿ��� ������ �ν��մϴ�. 
	���� cin���� �Է� ���� �Ŀ� getline()�� ����ϸ� ���� cin���� ���� ���� ���ڸ� �о�ͼ� �ٷ� �����ϰ� �˴ϴ�.

	�� ������ �ذ��ϱ� ���ؼ��� cin.ignore() �Լ��� ����Ͽ� �Է� ���ۿ��� ���� ���ڸ� ������ �մϴ�.
	*/


	return 0;
}