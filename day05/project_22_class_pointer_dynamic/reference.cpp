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
	another_a�� a�� �����ڴ� !!
	�� another_a �� a�� �Ǵٸ� �̸��̴�!!

	---->>>>  another_a�� ��� �۾��� �ϵ� ��ǻ� a�� �۾��ϴ� ���̴�!!


*/