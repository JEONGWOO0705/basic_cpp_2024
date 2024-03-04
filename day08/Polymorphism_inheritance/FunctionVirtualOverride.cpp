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
	가장 마지막에 오버라이딩된 가상함수가 호출된다.
	*/
	fptr->MyFunc();
	sptr->MyFunc();
	tptr->MyFunc();

	tptr->Second::MyFunc();
	tptr->Second::First::MyFunc();
	delete tptr;
	return 0;
}