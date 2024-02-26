# Basic-cpp-2024
IoT 시스템개발자 심화 프로그래밍 언어 학습리포지토리

## 1일차
- 개발환경 설치
	- Visual Studio 2022 Community 설치
	- C, C++ 소스코드 실행
	- C++에 대해 설명

- 제어문
	1. 선택제어문 
		- if, switch
		- if, else 문(C언어종류) / elif = Python
		- 반복문 For
		- 반복문 While
		- Overloading(재정의) : 함수가 같은 이름을 가지고 있어도, 다른 매개변수 설정을 통하여 다른 함수로 구분 가능!!

		```c++
		int MyFunc(int num){
			num++;
			return num;
		}
		int MyFunc(int a, int b){
			return a+b;
		}
		```

		- Overriding
		
	2. 반복제어문 
		- for,while
		- for(초기식; 조건식; 증감식)
	
- 지역변수 = 로컬변수
	1. 선언되어진 범위 안에서만 사용이 가능(static 영역에 저장)

- 자료형
	1. 문자 : 문자(char),문자열

	```c++
	///문자열 저장 방법
	char str[6] = "Hello"; // 배열로 문자열 저정
	char *ptr = "hello"; // 포인터로 문자열 저장 --> Hello 문자열의 첫 주소만 기억하고 나머지를 해결 하겠다는 의미

	// str = "Apple"; --> 오류 발생
	char *str = "Apple"; // 가능 

	// 참조 블로그 
	// https://m.blog.naver.com/tnsehf12345/220568293823
	```
	2. 숫자 : 정수(int),실수
	
- 정수로 계산하기
	



## 2일차
// class 안에 들어 가는 함수 = Method	--> 멤버 함수 및 전역 함수!!

- Default Value
- Reference 함수
	- 반환형 Reference Type
- Name Space
- 전역,지역변수
- C에서 메모리
	- 스택 : 지역변수, 매개변수
	- HEAP : 사용자에게 할당된 영역
		= Malloc() -> free()반환 = 사용을 할려면 Malloc으로 할당을 받는다
	- data: 함수, 전역변수, 상수, 문자 리터럴
	
	- // A & B = 비트 And 연산자
	- // A && B = 논리 And 연산자 = 논리 곱
		
-------------- clang04_test--------------

## 3일차
- new / delete
- 구조체 
```c++
typedef struct human {	//	 human 구조체	(내가 만든 사용자 정의 자료형)
	char name[20];	// 속성: 멤버 변수(name, age, job)
	int age;
	char job[20];

}Human;	// 앞으로 human 구조체를 Human으로 사용하겠다.
```
- 클래스
	- struct 대신해서 class를 사용하면 클래스가 됨!!
	- 멤버 변수와 멤버 함수로 구성된다.
		- 클래스 내부에는 멤버들의 선언으로 작성된다.
		- 멤버 함수의 정의를 외부로 빼낸다(스코프 연산자 사용 --->> 나는 어디에 소속인가!!)

	- 접근 제어 지시자
		- public : 어디서든 접근 허용
		- protected : 상속관계에 놓여 있을때, 유도 클래스에서의 접근 허용
		- private : 클래스 내 (클래스 내에 정의된 함수)에서만 접근 허용
		- 일반적으로 멤버 변수는 private, 멤버 함수는 public을 접근제한자로 사용한다!!
```c++
class human {	//	 human 구조체	(내가 만든 사용자 정의 자료형)
	char name[20];	// 속성: 멤버 변수(name, age, job)
	int age;
	char job[20];

}Human;	// 앞으로 human 구조체를 Human으로 사용하겠다.

```
- 파일 분할
	- car.h : 클래스의 선언을 담음(헤더파일)
	- car.cpp : 클래스의 정의(멤버함수의 정의)를 담음
	- RacingMain.cpp : int main() 함수를 담은 파일

## 4일차
- 객체 지향 프로그래밍의 이해
	- 현실에 존재하는 사물과 대상, 그리고 그에 따른 행동을 있는 그대로 실체화 하는 프로그램
	- 객체는 하나 이상의 상태 정보(데이터)와 하나 이상의 행동(기능)으로 구성
- 정보 은닉
- 캡슐화(Encapsulation)
- 생성자(Constructor)
	```c++
	#include <iostream>
	using namespace std;

	class MyClass {

		int num;

	public:
		MyClass() {	//default 생성자	// 매개변수를 입력하지 않았을때 생겨나는 생성자!!
		// 디폴트 생성자를 사용할 경우 생성자를 부를때 2와 3의 매개 변수 호출 따로 없이 1의 생성자(디폴트 생성자)만 호출할 경우 오류가 발생!!!
			cout << "생성자 호출: MyClass()" << endl;
			num = 10;
		}
		MyClass(int anum) {	//2
			num = anum;
			cout <<"num : " << num << endl;
		}
		void MyClassInfo() {
			cout << "num: " << num << endl;
		}
	};

	int main() {

		//MyClass *m = new MyClass();
		MyClass m1;	// 객체 생성 명령으로 자동 호출 된다
		m1.MyClassInfo();
		MyClass m2(20);
		return 0;
	}```

- strcpy를 통해 문자열 복사 복습
	```c++
	#include <iostream>
	using namespace std;

	class StudentClass {
		const int ID;	// 학번을 상수화 --> 상수화를 했을경우 객체 생성전에 초기화 시켜야함!!
		char name[20];	// 문자열을 넣을 공간을 생성!!
		char major[20];
		int age;

	public:
	// 문자열은 주소이기 때문에 포인트 변수에 넣어서 사용한다.
	// 문자열의 첫번째 문자 주소가 저장된다.
	// 멤버 이니셜라이즈는 객체 생성시 초기화 되지않는 (상수화 설정이 되어있는) 멤버들을 초기화 할때 사용한다!!
	// 즉 객체 생성과 상관 없이 미리 초기화가 되는 멤버들의 초기화
		StudentClass(int myid, const char *mname, const char *mmajor, int myage) : ID(myid){
			//C++ 인수 목록이 일치하는 생성자의 인스턴스가 없습니다.
            //인수 형식이 (int, const char [9], const char [3], int)입니다.
			//const char *mname 에서 const를 설정 안하면 위와 같은 오류가 발생한다.
			// 원본이 변경되면 안되기 때문에 const 꼭사용!
			ID = myid;
			strcpy_s(name, mname);	//strcpy가 없다면 정해놓은 20개의 공간을 나눠 쓰는게 아니라 
									//한 공간에 문자열이 들어가면서 오류가 발생한다.
			strcpy_s(major, mmajor);
			age = myage;
		}
		// 문자열 배열을 선언하고 strcpy() 를 통해야함! 
		void Showdata() const {

			cout << ID <<' '<< name <<' '<< major <<' '<< age << endl;

		}
	};

	int main(void) {
		StudentClass me(2052708, "jeongwoo", "IT", 27);	// 객체를 생성하면 생성자 호출해야 한다.
		// jeongwoo라는 문자열이 시작하는 주소가 mname에 저장되어 있음
		me.Showdata();

		return 0;

	}```


## 5일차

## 6일차

## 7일차

## 8일차

## 9일차 

## 10일차