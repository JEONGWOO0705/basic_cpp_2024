#include<iostream>
#include<string>
using namespace std;

/*
c-style 문자열
문자열은 마지막에 널문자가 붙는다.
*/
int main() {
	/*
	int code = 97;
	cout << code << endl;
	cout << (char)code << endl;
	cout << "------------------------" << endl;


	char ary[6] = { 'a','b','c','d','e' };	//문자열 타입의 배열 선언
	cout << ary << endl;
	cout << "------------------------\n" << endl;

	char ary1[6] = { 'a','b','c','\0','e' };		//널 문자- 문자열 끝을 알린다.
	cout << ary1 << endl;		
	cout << sizeof(ary1) << endl;		//전체 문자 크기
	cout << strlen(ary1) << endl;		// 널 문자 앞까지의 크기
	cout << "------------------------\n" << endl;

	char str[] = "string";			// 자동으로 null문자가 붙는다 
	cout << str << endl;
	cout << sizeof(str) << endl;	// s,t,r,i,n,g + 널 문자 = 7
	cout << strlen(str) << endl;	// 널문자 제외 --> 6이 나옴

	str[0] = 'S';
	cout << str << endl;





	cout << "------------------------\n" << endl;

	const char* pstr = "STRING";
	cout << pstr << endl;
	cout << sizeof(pstr) << endl;	
	cout << strlen(pstr) << endl;
	// pstr[0] = 's';	문자열을 포인터로 사용하는 경우는 변경이 불가능
	cout << pstr << endl;
	cout << "------------------------\n" << endl;

/*
C++ style	: heap 영역에 저장한다.

*/
	string str = "string";
	cout << str << endl;
	cout << sizeof(str) << endl;	// string 타입의 객체는 기본적으로 크기가 40이다
	//cout << strlen(str) << endl; 사용불가
	cout << str.size() << endl;	// --> 6 정확하게 문자 갯수를 세어준다!!

	string s1 = "Hongildon";
	cout << s1 << endl;
	cout << sizeof(s1) << endl;	//
	cout << s1.size() << endl;	// --> 6 정확하게 문자 갯수를 세어준다!!

	return 0;
}

