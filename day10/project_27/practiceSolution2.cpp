
#include<iostream>
using namespace std;
/*
1. ��ü �迭 ����ϱ�
*/
class Grade {
	char* name;
	int ko;
	int eng;
	int math;



public:
	Grade(const char* name, int ko, int eng, int math) {
		this->ko = ko;
		this->eng = eng;
		this->math = math;

		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
	}

	Grade() {	// �迭 ������ �ʿ��� ������!!
		cout << "������ ȣ��" << endl;
		
	
	}
	~Grade() {
		printf("�Ҹ��� ȣ��\n");

		delete[]name;
	}
	int GetKo() {
		return ko;
	}

	int GetEng() {
		return eng;
	}

	int GetMath() {
		return math;
	}

	int sum() {
		int sum = ko + eng + math;
		return sum;
	}
	double avr() {
		double avr = sum() / 3.0;
		return avr;
	}
};


int main() {
	// �Է�

	Grade gradeAry[3];		// ��ü �迭
	char name[20] = {};
	int inKo;
	int inEng;
	int inMath;
	int kosum = 0;
	int engsum = 0;
	int mathsum = 0;

	for (int i = 0; i < 3; i++) {
		cout << "�̸� : " << endl;
		cin >> name;

		cout << "���� ���� : " << endl;
		cin >> inKo;

		cout << "���� ���� : " << endl;
		cin >> inEng;

		cout << "���� ���� : " << endl;
		cin >> inMath;

		cout << "�̸� : " << name << " ���� ���� : " << inKo << " ���� ����: " << inEng << " ���� ���� : " << inMath << endl;

		// ��ü ���� : 5���� ��ü�� ����(�ϴ� 2�� �����غ���!), ��ü �迭 or ��ü ������ �迭

		gradeAry[i] = Grade (name, inKo, inEng, inMath);
		//cout << "  ���� : " << gradeAry[i]->sum() << "  ��� : " << gradeAry[i]->avr() << endl;
	}

	for (int i = 0; i < 3; i++) {

		kosum += gradeAry[i].GetKo();
		engsum += gradeAry[i].GetEng();
		mathsum += gradeAry[i].GetMath();
	}
	cout << "���� ���� ���� : " << kosum << "	���� ��� : " << double(kosum / 3) << endl;
	cout << "���� ���� ���� : " << engsum << "	���� ��� : " << double(engsum / 3) << endl;
	cout << "���� ���� ���� : " << mathsum << "	���� ��� : " << double(mathsum / 3) << endl;





	for (int i = 0; i < 3; i++) {
		printf("%d ��° �л� ���� : %d,  ���� : %.1f\n", i + 1, gradeAry[i].sum(), gradeAry[i].avr());
	}

	/*
	// new �����ڸ� ���� ���� �Ҵ��� �������� �� �ڵ尡 �ʿ���
	for (int i = 0; i < 3; i++) {
		printf("��ü �Ҵ� �Ҹ��� ȣ��\n");
		delete [i]gradeAry;
	}
	*/
	


	return 0;
}