#include<iostream>
using namespace std;


int main() {
	int a = 3;
	int& another_a = a;


	another_a = 5;

	cout << "a : " << a << endl;
	cout << "another_a : " << another_a << endl;

	return 0;
}

/*
	another_a는 a의 참조자다 !!
	즉 another_a 는 a의 또다른 이름이다!!

	---->>>>  another_a에 어떠한 작업을 하든 사실상 a에 작업하는 것이다!!


*/