#include <iostream> // 헤더파일 => 무조건 써야하는것

int main(void){  // 괄호가 들어 간 것 = 입력 값(입력값 = 있다 없다), main = 함수명, int = 함수의 출력, 전체= 함수의 정의
	// 머리 = 3행, 몸체 = 머리 밑 {} 들어간것, void = 출력값 
	int a = 20;
	std::cout << "Hello World!" << std::endl;
	std::cout << "Hello " <<"World!" << std::endl;
	std::cout << a << ' '<< 'A';
	std::cout << ' ' << 3.14 << std::endl;
	std::cout << "Hello, I am Jeongwoo Hwang!!" << "Welcome to C++" << std::endl;

	std::cout << "Hi"<< std::endl;
	return 0;
}
/* 1. 함수 정의
* void func() { //함수 이름 = func, 입력 = X, 출력 = X
*
*}


* void func1(int a) { //함수 이름 = func1, 입력 = int a, 출력 = X
*
* }


* int func2(){ //함수 이름 = func2, 입력 = x, 출력 = int, 매개변수 => x
*
*	return int(정수); -> 함수 반환하는 값, return 키워드 사용 => 반환될 값 int(정수) 지정 -> int형식으로 반환
*
* }

* {} = 있으면 범위(파이썬 외에 중괄호 쓰기), 파이썬 = 들어쓰기
*/


/* 2. 함수 호출
* func(); // 함수머리에서 출력 => 생략!
* func1();
* func2();

*/

// num = 변수 10 저장
// 프로그램 실행 => ram에 실행

// int num; // 변수 선언 먼저, 변수 선언 = 메모리에 저장할수 있는 공간
// num = 10; // 변수 <- 값을 대입

// 함수와 변수 차이 = 괄호
// 변수 선언 먼저
// 함수 사용시, 함수 선언하고 사용하고, 호출하기
// 함수 정의 선언 => 사용하기 위해서 => 함수 적고  => 함수 호출
// 변수 (램 = 저장하는 메모리 공간) => 선언하고 함수 작성시 밑에 
// 함수 => 정의 => 호출 