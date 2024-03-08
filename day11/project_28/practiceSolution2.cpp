
#include<iostream>
using namespace std;
/*
1. 객체 배열 사용하기
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

	Grade() {	// 배열 생성시 필요한 생성자!!
		cout << "생성자 호출" << endl;
		
	
	}
	~Grade() {
		printf("소멸자 호출\n");

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
	// 입력

	Grade gradeAry[3];		// 객체 배열
	char name[20] = {};
	int inKo;
	int inEng;
	int inMath;
	int kosum = 0;
	int engsum = 0;
	int mathsum = 0;

	for (int i = 0; i < 3; i++) {
		cout << "이름 : " << endl;
		cin >> name;

		cout << "국어 점수 : " << endl;
		cin >> inKo;

		cout << "영어 점수 : " << endl;
		cin >> inEng;

		cout << "수학 점수 : " << endl;
		cin >> inMath;

		cout << "이름 : " << name << " 국어 점수 : " << inKo << " 영어 점수: " << inEng << " 수학 점수 : " << inMath << endl;

		// 객체 생성 : 5개의 객체를 생성(일단 2개 생성해보자!), 객체 배열 or 객체 포인터 배열

		gradeAry[i] = Grade (name, inKo, inEng, inMath);
		//cout << "  총합 : " << gradeAry[i]->sum() << "  평균 : " << gradeAry[i]->avr() << endl;
	}

	for (int i = 0; i < 3; i++) {

		kosum += gradeAry[i].GetKo();
		engsum += gradeAry[i].GetEng();
		mathsum += gradeAry[i].GetMath();
	}
	cout << "국어 성적 총합 : " << kosum << "	국어 평균 : " << double(kosum / 3) << endl;
	cout << "영어 성적 총합 : " << engsum << "	영어 평균 : " << double(engsum / 3) << endl;
	cout << "수학 성적 총합 : " << mathsum << "	수학 평균 : " << double(mathsum / 3) << endl;





	for (int i = 0; i < 3; i++) {
		printf("%d 번째 학생 총점 : %d,  평점 : %.1f\n", i + 1, gradeAry[i].sum(), gradeAry[i].avr());
	}

	/*
	// new 연산자를 통해 동적 할당을 받을때만 이 코드가 필요함
	for (int i = 0; i < 3; i++) {
		printf("객체 할당 소멸자 호출\n");
		delete [i]gradeAry;
	}
	*/
	


	return 0;
}