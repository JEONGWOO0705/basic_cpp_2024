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
	2. 숫자 : 정수(int),실수
	
- 정수로 계산하기
	



## 2일차
// class 안에 들어 가는 함수 = Method

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
	- 접근 제어 지시자
		- public : 어디서든 접근 허용
		- protected : 상속관계에 놓여 있을때, 유도 클래스에서의 접근 허용
		- private : 클래스 내 (클래스 내에 정의된 함수)에서만 접근 허용
```c++
class human {	//	 human 구조체	(내가 만든 사용자 정의 자료형)
	char name[20];	// 속성: 멤버 변수(name, age, job)
	int age;
	char job[20];

}Human;	// 앞으로 human 구조체를 Human으로 사용하겠다.

- 파일 분할
	- car.h : 클래스의 선언을 담음(헤더파일)
	- car.cpp : 클래스의 정의(멤버함수의 정의)를 담음
	- RacingMain.cpp : int main() 함수를 담은 파일
```
## 4일차

## 5일차

## 6일차

## 7일차

## 8일차

## 9일차 

## 10일차