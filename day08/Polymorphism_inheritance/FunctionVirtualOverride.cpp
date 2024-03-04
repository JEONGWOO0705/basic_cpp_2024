#include<iostream>
using namespace std;

class First {
public:
	virtual void MyFunc() {
		cout << "First Func" << endl;
	}

};

class Second : public First {
public:
	virtual void MyFunc() {
		cout << "Second Func" << endl;
	}
};

class Third : public Second {
public:
	virtual void MyFunc() {
		cout << "Third Func" << endl;
	}
};

int main(void) {
	Third* tptr = new Third();
	Second* sptr = tptr;
	First* fptr = sptr;


	/*
	���� �������� �������̵��� �����Լ��� ȣ��ȴ�.
	*/
	fptr->MyFunc();
	sptr->MyFunc();
	tptr->MyFunc();

	tptr->Second::MyFunc();
	tptr->Second::First::MyFunc();
	delete tptr;
	return 0;
}