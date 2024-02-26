#include <iostream>
using namespace std;

class StudentClass {
	const int ID;	// 학번을 상수화 --> 상수화를 했을경우 객체 생성전에 초기화 시켜야함!!
	char name[20];	// 문자열을 넣을 공간을 생성!!
	char major[20];
	int age;
	const int birth;

public:
	// 문자열은 주소이기 때문에 포인트 변수에 넣어서 사용한다.
	// 문자열의 첫번째 문자 주소가 저장된다.
	StudentClass(int myid, const char* mname, const char* mmajor, int myage, int mybirth) : ID(myid), birth(mybirth)// **멤버 이니셜라이즈** ID값이 위에 상수화 되어있기 때문에 객체 생성전에 초기화 시켜놔야함
	{
		//C++ 인수 목록이 일치하는 생성자의 인스턴스가 없습니다.
		//인수 형식이 (int, const char [9], const char [3], int)입니다.
		//const char *mname 에서 const를 설정 안하면 위와 같은 오류가 발생한다.
		// 원본이 변경되면 안되기 때문에 const 꼭사용!
		strcpy_s(name, mname);	//strcpy가 없다면 정해놓은 20개의 공간을 나눠 쓰는게 아니라 한 공간에 문자열이 들어가면서 오류가 발생한다.
		strcpy_s(major, mmajor);
		age = myage;
	}
	// 문자열 배열을 선언하고 strcpy() 를 통해 
	void Showdata() const {

		cout << ID << ' ' << name << ' ' << major << ' ' << age <<' '<<birth<< endl;

	}
};

int main(void) {
	StudentClass me(2052708, "jeongwoo", "IT", 27, 980705);		// 객체를 생성하면 생성자 호출해야 한다.
	// jeongwoo라는 문자열이 시작하는 주소가 mname에 저장되어 있음
	me.Showdata();

	return 0;

}