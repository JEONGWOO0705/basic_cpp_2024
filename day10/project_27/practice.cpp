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
		cout << "학생 이름 : " << name << endl;
		cout << "국어 성적 : " << kr << endl;
		cout << "수학 성적 : " << math << endl;
		cout << "영어 성적 : " << english << endl;
		cout << "총점 : " << Sum(kr, math, english) << endl;
		cout << "평균 : " << Average(kr, math, english) << endl;
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

		cout << "이름을 입력하세요 : " << endl;
		cin.getline(mname, 100);

		cout << "국어 성적을 입력하세요 : " << endl;
		cin >> mkr;

		cout << "수학 성적을 입력하세요 : " << endl;
		cin >> mmath;

		cout << "영어 성적을 입력하세요 : " << endl;
		cin >> menglish;

		cin.ignore();

		Grade student(mname, mkr, mmath, menglish);
		student.ShowStudentInfo();
	}

	/*
	이 코드에서 두 번째 학생의 이름을 입력받을 때 문제가 발생하는 이유는 cin과 getline()을 혼합하여 사용할 때 발생할 수 있는 버그 때문입니다.

	cin은 입력 버퍼에서 개행 문자('\n')를 남기는데, getline()은 개행 문자를 문자열의 끝으로 인식합니다. 
	따라서 cin으로 입력 받은 후에 getline()을 사용하면 이전 cin에서 남은 개행 문자를 읽어와서 바로 종료하게 됩니다.

	이 문제를 해결하기 위해서는 cin.ignore() 함수를 사용하여 입력 버퍼에서 개행 문자를 지워야 합니다.
	*/


	return 0;
}