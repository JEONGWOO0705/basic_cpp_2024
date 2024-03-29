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
	2. 변수를 초기화 하는 이유!!
		- 정의되지 않은 값을 사용 하는 것을 방지!!!
			- 초기화 하지 않으면 해당 변수에 메모리에 남아 있는 이전의 값을 가지게 된다!!
		- 예기치 않은 버그를 줄임!!

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
- 멤버 이니셜라이저(Member Initializer)
	- const변수와 참조자 선언과 동시에 초기화가 이루어져야함!!
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
- 생성자 추가 학습
- 소멸자(destructor)
	- 힙영역에 메모리 공간을 할당 받았을 경우 반드시 소멸자를 통해 할당된 메모리 공간 반환하기!!
- 포인터(pointer)
	- 배열 포인터
	```c++
	Human h[3] = { Human("홍길동", 50), Human("황정우", 27), Human("이수지", 27) };	// 객체 배열

	for (int i = 0; i < 3; i++) {
		h[i].HumanInfo();
	}

	Human* h1 = new Human("가나다", 50);
	// h1 이라는 포인트 객체에 new를 통해 정보가 담긴 주소를 저장한다	
	// ("가나다", 50) 정보가 담긴 포인트 객체 h1에서  ->를 통해 멤버함수 HumanInfo()에 접근한다.
	h1->HumanInfo();						

	delete h1;
	
	```
	- this 포인터
		- 생성자 멤버 변수 선언시 클래스 안에 있는 (private 안에 있는) 변수와 같은 이름으로 설정 가능
		- this는 객체 자기 자신을 가르킴
	```c++
	public:
	TwoNumber(int num1, int num2) {
		this->num1 = num1;
		this->num2 = num2;
	```

- 복사 생성자
	- 객체를 복사할때 호출하는 생성자
	- 따라서 복사할 객체를 입력으로 가져야 하는데
	- 이때 원본 객체의 참조를 입력으로 받는다.
	- 초기화 꼭 하기!! (이니셜라이즈와 this로 초기화 하기!!)

- 참조자 (reference  [&] ) 복습

	```c++
	int main() {
	int a = 3;
	int& another_a = a;


	another_a = 5;

	cout << "a : " << a << endl;
	cout << "another_a : " << another_a << endl;

	return 0;
	}
	```

	- another_a는 a의 참조자다 !!
	- 즉 another_a 는 a의 또다른 이름이다!!
	- another_a에 어떠한 작업을 하든 사실상 a에 작업하는 것이다!!
	
## 6일차
- 얉은 복사 생성자
	- 복사 생성자 정의 없이 ex) Person man1 = man2; 로 객체를 복사하면
	- 얇은복사 --> 소멸자가 한번밖에 생성이 안됨
    - man2 의 소멸자가 실행되기전에 man1이 소멸자가 실행되면서, man 1의 문자열이 삭제 되고
    - 문자열을 가르키고 있던 man2는 소멸할게 없어졌기 때문!!

- 깊은 복사 생성자
	- 복사할 문자열에게 새로운 메모리 공간을 주면서 복사를 한다!
	```c++
	Person(const Person& copy) : age(copy.age) {
    name = new char[strlen(copy.name) + 1];
    strcpy(name, copy.name);
	}
	```
- 복사 생성자 호출되는 시점
	- 기존에 생성된 객체를 이용해서 새로운 객체를 초기화하는 경우
	- Call-by-value 방식의 함수 호출 과정에서 객체를 인자로 전달하는 경우
	- 객체를 반환하되, 참조형으로 반환하지 않는 경우

- Friend class
	- friend class 클래스 이름 !!

- static
	- 전역변수에 선언된 static
		- 선언된 파일 내에서만 참조 허용
	- 함수내에 선언된 static
		- 한번만 초기화되고, 지역변수와 달리 함수를 빠져나가도 소멸되지 않는다.
	- static 멤버함수 내에서는 static 멤버 변수와 static멤버함수만 호출이 가능하다.
	- const static 멤버 변수는 클래스가 정의될 때 지정된 값이 유지되는 상수
## 7일차
- static 추가 학습
- 상속(Inheritance)
	- 자식 클래스에서 부모 클래스의 멤버 함수를 사용할 수 있게 함!!
		- 부모클래스의 멤버 변수에 접근을 할려면 protected로 변수를 선언해야한다
			```c++
			void state() {
				cout << "총알의 수 : " << bullet /* getbullet()  함수로 만들어서 하는 방법도 있음!!*/ << endl;		
				
				cout << "수갑의 수 : " << handcuffs << endl;
				// Gun(부모클래스)에서 변수를 private으로 선언하면 변수를 자식 클래스에서 쓸수없음
				// 부모클래스의 변수를 쓰기 위해서 변수 선언을 protected로 선언한다
				}
			```

		- 자식 클래스에서 부모 클래스의 멤버까지 초기화 해야할 의무가 있다!
		- 부모클래스를 호출해서 클래스의 멤버를 초기화 하는것이 Best!

		```c++
		class UnivStudent : public Person {// 클래스의 상속을 의미함	

		private:
				string major;

		public:
			UnivStudent(const char* myname, int myage, const char* mymajor) :Person(myage, myname) {
				cout << "자식 생성자 실행" << endl;
				major = mymajor;
				}

			void WhoAreYou() const {
				WhatYourName();
				HowOldAreYou();

				cout << "My major is " << major << endl << endl;
			}
		};

		```


	- 유도 클래스
		- 유도 클래스의 객체 생성과정에서 기초 클래스의 생성자는 100% 생성된다
		- 유도 클래스의 생성자에서 기초 클래스의 생성자 호출을 명시하지 않으면, 기초 클래스의 void생성자가 호출된다.

	- A --> B--> C 순서로 상속받고 있다면 C에서도 A의 멤버함수를 사용할수 있다!!

	- ** 함수에서 문자열을 반환 값으로 받고 싶을때 **
		
		```c++
		string ShowName() {
			return name;
		}
		```


## 8일차
- 객체 포인터의 참조 관계
	- 부모타입의 객체 포인터로 자식 객체를 가리킬 수 있다.
	- 하지만 자식 타입의 객체 포인터로 부모 객체를 가리킬 수 없다.	

	```c++
	
	#include <iostream>

	class Person{};

	class Student : public Person{};
	class Partimestudent : public Student{};

	int main()
	{
		return 0;
	}

	Person* ptr;        //Person 타입의 객체 포인터 선언
						// 부모타입의 객체 포인터는 자식 타입의 객체도 선언 가능 but 반대는 불가!!
	Person *ptr = new Person(); // o

	// Person p = new Person(); // x

	Person* ptr = new Student();
	Person* ptr2 = new Partimestudent();
	/*
	C++컴파일러는 포인터 연산의 가능성 여부를 판단할대, 포인터의 자료형 기준으로 판단
	실제 가리키는 객체의 자료형을 기준으로 판단하지 않는다

	--> 부모 클래스의 포인터 자료형으로 선언했으면 부모 클래스가 기준!
	*/
	```

- 다형성
	- 오버로딩(Overloading) : 다중정의
	- 오버라이딩(Overrideing) : 재정의, 상속관계에서 사용

- 가상 함수
- 가상 소멸자
- 추상클래스
	- 객체를 생성하지 않는 클래스
	- 순수 가상 함수를 가지고 있는 클래스
	- 현재 당장은 필요가 없지만 미래에 필요할 수 있는 클래스다!!
	- ex)  virtual int Getpay() const = 0; --> 실행부가 없음!!



## 9일차 
- 연산자 오버로딩
- 대입 연산자
	- 정의하지 않으면 디폴트 대입 연산자가 삽인된다.
	- 디폴트 대입 연산자는 멤버대 멤버의 복사(얉은 복사)를 진행한다
	- 연산자 내에서 동적 할당을 한다면, 그리고 깊은 복사가 필요하다면 직접 정의해야한다.

## 10일차
- 대입 연산자 추가 학습 및 연산자 오버로딩
- 배열의 인덱스 연산자 오버로딩
- 스마트 포인터

	```c++
	#include <iostream>
	using namespace std;

	class MyClass {
	private:
		int* ptr;

	public:
		MyClass(int p):ptr(new int[100]) {
			printf("생성자 호출 \n");
		}

		~MyClass() {
			cout << "소멸자 호출 \n" << endl;
			delete[]ptr;
		}

	};

	int main() {

		MyClass* m1 = new MyClass(10);

		cout << "===================================================" << endl;
		unique_ptr<MyClass>m2(new MyClass(20));	// smart pointer

		return 0;
	}
	```

## 11일차
- 객체 배열, 객체 포인터 배열 복습
	- 객체 배열을 생성할때 생성자를 따로 추가해야 한다!!

	```c++
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
		name = NULL;
		ko = 0;
		eng = 0;
		math = 0;
	}
	~Grade() {
		printf("소멸자 호출\n");

		delete[]name;
	}
	```
## 12일차
- 복습 및 상품추가 및 조회 프로그램 만들어보기!!

## 13일차
- 예외 처리
- Vector